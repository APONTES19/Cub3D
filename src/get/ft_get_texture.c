/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:07:11 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/26 11:19:22 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static int ft_set_texture(t_txr *texture, t_win *mlx, char *path);

void	ft_get_texture(t_cub *cub)
{
	printf("\n\n passei 1 \n\n\n");
	int result;

	result =ft_set_texture(cub->list_texture + 2, cub->w.mlx, cub->data.no_path);

	if(result == 1)
		printf("\n\n erro set texture \n\n\n");
}

static int ft_set_texture(t_txr *texture, t_win *mlx, char *path)
{
	int	x;
	int	y;

	texture->img = mlx_xpm_file_to_image(mlx, path, &x, &y);
	printf("\n\n passei \n\n\n");
	if (!texture->img)
		return (1);
	texture->y = y;
	texture->x = x;
	texture->bpp = texture->bpp / 8;
	texture->size_line = texture->size_line / texture->bpp;
	texture->buffer = (uint32_t *)texture->data;
	return(0);
}
