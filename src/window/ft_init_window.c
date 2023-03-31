/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/30 22:25:53 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

t_img	*ft_mlx_texture_get(void *mlx, char *file);

void	ft_init_window(t_cub *cub)
{
	cub->w.mlx = mlx_init();
	if (cub->w.mlx == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro init mlx failed");
	cub->w.win = mlx_new_window(cub->w.mlx, WIN_SIZE_X,
			WIN_SIZE_Y, "Cub 3D");
	if (cub->w.win == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro creat window");
	cub->w.no = ft_mlx_texture_get (cub->w.mlx, cub->data.no_path);
	cub->w.so = ft_mlx_texture_get (cub->w.mlx, cub->data.so_path);
	cub->w.we = ft_mlx_texture_get (cub->w.mlx, cub->data.we_path);
	cub->w.ea = ft_mlx_texture_get (cub->w.mlx, cub->data.ea_path);
}

t_img	*ft_mlx_texture_get(void *mlx, char *file)
{
	int		tmp;
	t_img	*image;

	image = malloc (sizeof(t_img));
	image->img = mlx_xpm_file_to_image(mlx, file, &tmp, &tmp);
	image->addr = mlx_get_data_addr(image->img, &image->bits_per_pixel,
			&image->line_length, &image->endian);
	return (image);
}
