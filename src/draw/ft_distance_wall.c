/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance_wall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:16:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/29 16:58:57 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

double ft_loop_distance(t_cub *cub );
double ft_horizontal_wall (t_cub *data);
double ft_vertical_wall (t_cub *data);


void ft_distance_wall(t_cub *data)
{
	double dh;
	double dv;

	dh = ft_horizontal_wall (data)* cos(ft_radian_domain(data->play.ang - data->play.ray_ang ));
	dv= ft_vertical_wall (data) *  cos(ft_radian_domain(data->play.ang - data->play.ray_ang ));
	if( dv < dh)
	{
		data->play.status =   VERTICAL;
		data->play.dist = dv;
	}
	else
	{
		data->play.status =  HORIZONTAL;
		data->play.dist = dh;
	}
}

 double ft_horizontal_wall (t_cub *data)
{
	if(sin(data->play.ray_ang) == 0) 
		return (ft_vertical_wall (data));
	
		
	if(sin(data->play.ray_ang) > 0 ) // olhando para cima
    {
		data->play.dy = -1* TEXTURE_SIZE;
		data->play.yo  = floor( data->play.y /TEXTURE_SIZE) * TEXTURE_SIZE - 0.001  ;
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



double ft_vertical_wall (t_cub *data)
{
	if(cos(data->play.ray_ang) == 0) 
		return (ft_horizontal_wall (data));
	if(cos(data->play.ray_ang) > 0 ) // direito
    {
		data->play.dx = TEXTURE_SIZE;
		data->play.dy =  -1*tan (data->play.ray_ang) * TEXTURE_SIZE;
		data->play.xo = floor(data->play.x /TEXTURE_SIZE) *TEXTURE_SIZE + TEXTURE_SIZE;
		data->play.yo = tan (data->play.ray_ang) *(data->play.x  - data->play.xo) + data->play.y;
    }
	else 
	{
		data->play.dx = -1 * TEXTURE_SIZE;
		data->play.dy =  tan (data->play.ray_ang) * TEXTURE_SIZE;
		data->play.xo = floor( data->play.x/TEXTURE_SIZE) *TEXTURE_SIZE  -  0.001  ;
		data->play.yo =  tan (data->play.ray_ang) *(data->play.x  - data->play.xo) + data->play.y;
	}
	return (ft_loop_distance(data));
}


 double ft_loop_distance(t_cub *cub )
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

