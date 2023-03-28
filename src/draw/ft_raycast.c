/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raycast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:39:00 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/28 06:01:17 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


void ft_raycast(t_cub *cub)
{
    cub->w.image =malloc(sizeof(t_img));
    cub->w.image->img = mlx_new_image(cub->w.mlx, WIN_SIZE_X, WIN_SIZE_Y);
    cub->w.image->addr = mlx_get_data_addr(cub->w.image->img,
	&cub->w.image->bits_per_pixel,
	&cub->w.image->line_length,
	&cub->w.image->endian);

 	cub->play.ray = 0;
	cub->play.ray_ang=  cub->play.ang + (PI/3)/2;
 	while(cub->play.ray < WIN_SIZE_X)
    {
        
    	ft_distance_wall(cub);
        ft_drawn(cub);
        cub->play.ray_ang -= (PI / 6)/ WIN_SIZE_X;
        cub->play.ray ++;
    }
	mlx_put_image_to_window(cub->w.mlx, cub->w.win, cub->w.image->img, 0, 0);
	mlx_destroy_image(cub->w.mlx, cub->w.image->img);
	free(cub->w.image);
}

