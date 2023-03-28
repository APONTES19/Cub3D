/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raycast_loop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:56:10 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/27 20:46:44 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"
// deixar aqui para 

void ft_drawn_wall(t_cub *cub);



void ft_ray_casting(t_cub *cub)
{
    cub->w.image.img = mlx_new_image(cub->w.mlx, WIN_SIZE_X, WIN_SIZE_Y);
    cub->w.image.addr = mlx_get_data_addr(cub->w.image.img,
	&cub->w.image.bits_per_pixel,
	&cub->w.image.line_length,
	&cub->w.image.endian);

 	cub->play.ray = 0;
	cub->play.ray_ang=  cub->play.ang + PI/180 * TEXTURE_SIZE / 2;
 	while(cub->play.ray < TEXTURE_SIZE)
    {
    	ft_distance_wall(cub);
        ft_drawn_wall(cub);
        cub->play.ray_ang -= (PI / 180);
        cub->play.ray ++;
    }
	mlx_put_image_to_window(cub->w.mlx, cub->w.win, cub->w.image.img, 0, 0);
	mlx_destroy_image(cub->w.mlx, cub->w.image.img);
	mlx_loop(cub->w.mlx);
}








void ft_drawn_wall(t_cub *cub)
{
   	int i;
    int j;
    int size;

    size = ft_size_wall(cub);
    j = floor( WIN_SIZE_Y /2 - size/2);
    i = 0;
    while (i < size)
    {

		ft_mlx_pixel_put(&cub->w.image.img, cub->play.ray, i +j,  0x00FF0000);
    	i++;
    }

}