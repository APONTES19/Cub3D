/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_casting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:39:00 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/15 21:17:58 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"
void ft_drawn_wall(t_cub *cub);
#include <stdlib.h> // jogar fora

void ft_ray_casting(t_cub *cub)
{






   cub->w.mlx= mlx_init();
    cub->w.win = mlx_new_window( cub->w.mlx, WIN_SIZE_X, WIN_SIZE_Y, "Da um liga na diagonales");
	mlx_key_hook(cub->w.win, &ft_key, &cub);


    cub->img.img = mlx_new_image(cub->w.mlx, WIN_SIZE_X, WIN_SIZE_Y);
    cub->img.addr = mlx_get_data_addr(cub->img.img,
	&cub->img.bits_per_pixel,
	&cub->img.line_length,
	&cub->img.endian);


cub->play.ang= PI /2;   //tirar depois

 cub->play.ray = 0;

  cub->play.ray_ang=  cub->play.ang + PI/7;
  while(cub->play.ray < WIN_SIZE_X)
    {


 	if ( cub->play.ray_ang >= 2 * PI)
			cub->play.ray_ang -= 2 * PI;
		if ( cub->play.ray_ang < 0)
			cub->play.ray_ang += 2 * PI;



    	ft_distance_wall(cub);
        ft_drawn_wall(cub);
        cub->play.ray_ang -= (PI / 6)/  WIN_SIZE_X;
        cub->play.ray ++;
    }


  mlx_put_image_to_window(cub->w.mlx, cub->w.win, cub->img.img, 0, 0);

    mlx_destroy_image(cub->w.mlx, cub->img.img);
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

      ft_mlx_pixel_put(&cub->img, cub->play.ray, i +j,  0x00FF0000);
        i++;
    }

}



/* para teste

float size = 33;
 cub->play.ray = 0;


  cub->play.ray_ang=  0;
  while(cub->play.ray < 365)
    {

	ft_distance_wall(cub);

	if( cos(cub->play.ray_ang) > 0 )
		printf("\n %d(valo , correto, angulo) = (%f, %f, %f) = %f",cub->play.ray,
		cub->play.dist, size/ cos(cub->play.ray_ang),cub->play.ray_ang, size/ cos(cub->play.ray_ang) - cub->play.dist);
	else
		printf("\n %d(valo , correto, angulo) = (%f, %f, %f) = %f",cub->play.ray,
		cub->play.dist, size/ cos(cub->play.ray_ang),cub->play.ray_ang, size/ cos(cub->play.ray_ang) + cub->play.dist);


	if( sin(cub->play.ray_ang) > 0 )
		printf("\n %d(valo , correto, angulo) = (%f, %f, %f) = %f",cub->play.ray,
		cub->play.dist, size/ sin(cub->play.ray_ang),cub->play.ray_ang, size/ sin(cub->play.ray_ang) - cub->play.dist);
	else
		printf("\n %d(valo , correto, angulo) = (%f, %f, %f) = %f",cub->play.ray,
		cub->play.dist, size/ sin(cub->play.ray_ang),cub->play.ray_ang, size/ sin(cub->play.ray_ang) + cub->play.dist);


	cub->play.ray_ang += PI/180;
  	cub->play.ray ++;

*/