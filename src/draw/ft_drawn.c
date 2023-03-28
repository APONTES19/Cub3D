/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 05:35:29 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/28 06:00:18 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void ft_drawn(t_cub *cub)
{
   	int i;
    int j;
    int size;

    size = ft_size_wall(cub);
    j = floor( WIN_SIZE_Y /2 - size/2);
    i = 0;
    while (i < WIN_SIZE_Y)
    {
		if( i < j)
			ft_mlx_pixel_put(cub->w.image, cub->play.ray, i, cub->data.c_ceiling);
		else if ( i > j && i < j + size)
			ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x00FF0000);
		else 
			ft_mlx_pixel_put(cub->w.image,  cub->play.ray,i, cub->data.c_floor);
    	i++;
    }

}
