/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_casting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:39:00 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/14 04:00:21 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"
void ft_drawn_wall(t_cub *cub);

void ft_ray_casting(t_cub *cub)
{
/*
aqui fazer varredura do angulo e imprimir a risca na tela
*/


   cub->win.mlx= mlx_init();
    cub->win.scr = mlx_new_window( cub->win.mlx, WIN_SIZE_X, WIN_SIZE_Y, "Da um liga na diagonales");

    cub->img.img = mlx_new_image(cub->win.mlx, WIN_SIZE_X, WIN_SIZE_Y);
    cub->img.addr = mlx_get_data_addr(cub->img.img,
	&cub->img.bits_per_pixel,
	&cub->img.line_length,
	&cub->img.endian);


  
 cub->play.ray = 0;
  cub->play.ray_ang=  cub->play.ang + PI/6;
  while(cub->play.ray < WIN_SIZE_X /3)
    { 
       ft_distance_wall(cub);
       
      ft_drawn_wall(cub);
        cub->play.ray_ang -= (PI / 6)/  WIN_SIZE_X;
        cub->play.ray ++;
    }
    
   
  mlx_put_image_to_window(cub->win.mlx, cub->win.scr, cub->img.img, 0, 0);
    
    mlx_destroy_image(cub->win.mlx, cub->img.img);
   mlx_loop(cub->win.mlx);

   
}


void ft_drawn_wall(t_cub *cub)
{
   int i; 
    int j;
    int size;
  
    size = ft_size_wall(cub);
    j = floor( WIN_SIZE_Y/2  - size/2);
    printf("j =%d", j);
    
  
    i = 0;
    
    while (i < size)
    {
        
      ft_mlx_pixel_put(&cub->img, cub->play.ray, i +j,  0x00FF0000);
        i++;
    }
 
}