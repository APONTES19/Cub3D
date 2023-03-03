/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_texture.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:02:29 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/02 23:47:17 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

t_texture	*ft_texture(char *path, void *mlx)
{
	t_texture	*texture;
	int			trash;

	texture = malloc (sizeof(t_texture));
	texture->img = mlx_xpm_file_to_image(mlx, path, &trash, &trash);
	texture->addr= mlx_get_data_addr(texture->img, &texture->bits_per_pixel,
			&texture->line_length, &texture->endian);
	return (texture);
}