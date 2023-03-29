/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/29 14:51:49 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

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