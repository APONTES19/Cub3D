/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/31 01:17:55 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static t_img	*ft_mlx_texture_get(void *mlx, char *file);
static int		ft_set_texture(t_cub *cub);

int	ft_init_window(t_cub *cub)
{
	cub->w.mlx = mlx_init();
	if (cub->w.mlx == NULL)
		return (ft_error_message(ERROR_WIN, "\t- Erro init mlx failed"));
	cub->w.win = mlx_new_window(cub->w.mlx, WIN_SIZE_X,
			WIN_SIZE_Y, "Cub 3D");
	if (cub->w.win == NULL)
		return (ft_error_message(ERROR_WIN, "\t- Erro creat window"));
	if (ft_set_texture(cub) == 1)
		return (ft_error_message(ERROR_MALLOC, "\t- Erro creat texture"));
	return (0);
}

static int	ft_set_texture(t_cub *cub)
{
	cub->w.no = ft_mlx_texture_get (cub->w.mlx, cub->data.no_path);
	if (!cub->w.no)
		return (1);
	cub->w.so = ft_mlx_texture_get (cub->w.mlx, cub->data.so_path);
	if (!cub->w.no)
		return (1);
	cub->w.we = ft_mlx_texture_get (cub->w.mlx, cub->data.we_path);
	if (!cub->w.no)
		return (1);
	cub->w.ea = ft_mlx_texture_get (cub->w.mlx, cub->data.ea_path);
	if (!cub->w.no)
		return (1);
	return (0);
}

static t_img	*ft_mlx_texture_get(void *mlx, char *file)
{
	int		tmp;
	t_img	*image;

	image = malloc (sizeof(t_img));
	image->img = mlx_xpm_file_to_image(mlx, file, &tmp, &tmp);
	image->addr = mlx_get_data_addr(image->img, &image->bits_per_pixel,
			&image->line_length, &image->endian);
	return (image);
}

