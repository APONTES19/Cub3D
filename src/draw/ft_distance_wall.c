/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance_wall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:16:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/28 23:14:39 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

float ft_loop_distance(t_cub *cub );
float ft_horizontal_wall (t_cub *data);
float ft_vertical_wall (t_cub *data);


void ft_distance_wall(t_cub *data)
{
	float dh;
	float dv;

   dh = ft_horizontal_wall (data);

	dv= ft_vertical_wall (data);
	if( dv < dh)
	{
		data->play.status =  VERTICAL;
		data->play.dist = dv; //* cos(data->play.ang-ft_angle_correction(data->play.ray_ang));
	}
	else
	{
		data->play.status =  HORIZONTAL;
		data->play.dist = dh; //* cos(data->play.ang- ft_angle_correction( data->play.ray_ang ));
	}

}


 float ft_horizontal_wall (t_cub *data)
{

	if (sin(data->play.ray_ang) == 0 )
		return (MAX);
	if(sin(data->play.ray_ang) > 0 ) // olhando para cima
    {
		data->play.dy = -1* TEXTURE_SIZE;
		data->play.yo  = floor( data->play.y /TEXTURE_SIZE) * TEXTURE_SIZE - 1 ;
		data->play.xo = (data->play.y -data->play.yo)*cos(data->play.ray_ang) / sin(data->play.ray_ang) +  data->play.x;
    	data->play. dx =  TEXTURE_SIZE * cos(data->play.ray_ang) / sin(data->play.ray_ang);
    }
	else 
	{
		data->play.dy = TEXTURE_SIZE;
		data->play.yo = floor(data->play.y/TEXTURE_SIZE)*TEXTURE_SIZE  + TEXTURE_SIZE;
		data->play.xo = (data->play.y -data->play.yo)* cos(data->play.ray_ang) / sin(data->play.ray_ang) +  data->play.x;
        data->play.dx = -1*TEXTURE_SIZE *cos(data->play.ray_ang) / sin(data->play.ray_ang);
	}
	return (ft_loop_distance(data));
}



float ft_vertical_wall (t_cub *data)
{
	if(cos(data->play.ray_ang) == 0) 
		return (MAX);
	if(cos(data->play.ray_ang) > 0) // direito
    {
		data->play.dx = TEXTURE_SIZE;
		data->play.dy =  -1*tan (data->play.ray_ang) * TEXTURE_SIZE;
		data->play.xo = floor(data->play.x /TEXTURE_SIZE) *TEXTURE_SIZE + TEXTURE_SIZE;
		data->play.yo = 1* tan (data->play.ray_ang) *(data->play.x  - data->play.xo) + data->play.y;
    }
	else 
	{
		data->play.dx = -1 * TEXTURE_SIZE;
		data->play.dy =  tan (data->play.ray_ang) * TEXTURE_SIZE;
		data->play.xo = floor( data->play.x/TEXTURE_SIZE) *TEXTURE_SIZE  - 1 ;
		data->play.yo =  tan (data->play.ray_ang) *(data->play.x  - data->play.xo) + data->play.y;
	}
	return (ft_loop_distance(data));
}


 float ft_loop_distance(t_cub *cub )
{
 	while (ft_iswall(cub->data.map, cub->play.yo, cub->play.xo) == FAILURE)
	{
		cub->play.yo += cub->play.dy;
		cub->play.xo += cub->play.dx;
	}
	if(ft_iswall(cub->data.map, cub->play.yo, cub->play.xo) == -1 )
		return(MAX);
	return(ft_distance(cub->play.x, cub->play.y, cub->play.xo, cub->play.yo));
}

