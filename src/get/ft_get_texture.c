/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:07:11 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/24 23:12:49 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


void	ft_get_texture(t_cub *cub)
{
	int u;
	int v;

	// char m[] = "lucas"; // Usando um array de caracteres em vez de uma string literal
	// // (void)cub;


	// cub->img.no = m;
	// printf("\n\nLUCAS=|%s|\n\n", (char *)cub->img.no);

	// cub->data.no->img = mlx_xpm_file_to_image(cub->w.mlx, cub->data.no_path,
	// 	&x, &y);
	// cub->data.no->addr = mlx_get_data_addr(cub->data.no->img,
	// 	&cub->data.no->bits_per_pixel,
	// 	&cub->data.no->line_length, &cub->data.no->endian);


	cub->img.no = mlx_xpm_file_to_image(cub->w.mlx,
	 "./img/north_texture.xpm", &u, &v);

}



// typedef	struct	img {l


//     void	*img;
//     char	*addr;
//     int	bits_per_pixel;
//     int	line_length;
//     int	endian;
// }	img;
