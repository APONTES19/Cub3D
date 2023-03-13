/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance_wall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:16:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/13 04:04:19 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"
float ft_loop_distance(t_cub *cub );
int ft_round(float number); // joga fora?
static float ft_horizontal_wall (t_cub *data);

static float ft_vertical_wall (t_cub *data);
float ft_distance_wall(t_cub *data)
{
	float dh;
	float dv;
	data->play.ray_ang= 1*PI/6;
	dh = ft_horizontal_wall (data);
	dv= ft_vertical_wall (data);
	if( dv < dh)
	{
		data->play.status =  VERTICAL;
		data->play.dist = dv * cos( data->play.ray_ang - data->play.ang);
		return (data->play.dist);	
	}
	data->play.status =  HORIZONTAL;
	data->play.dist = dh * cos( data->play.ray_ang - data->play.ang);
	return (data->play.dist);
}



static float ft_horizontal_wall (t_cub *data)
{
	if(sin(data->play.ray_ang) > 0.001593) // olhando para cima
    {
		data->play.dy = -1* TEXTURE_SIZE;
		data->play.yo  = floor( data->play.y /TEXTURE_SIZE) * TEXTURE_SIZE - 0.00001 ;
		data->play.xo = (data->play.y -data->play.yo)/tan (data->play.ray_ang) +  data->play.x;
    	data->play. dx = -1*data->play.dy/tan(data->play.ray_ang);
    } 
	else if(sin(data->play.ray_ang) < - 0.001593) // olhando para baixo
	{
		data->play.dy = TEXTURE_SIZE;
		data->play.yo = ceil(data->play.y/TEXTURE_SIZE)*TEXTURE_SIZE + 0.00001;
		data->play.xo = (data->play.y -data->play.yo)/tan (data->play.ray_ang) +  data->play.x;
        data->play.dx =-1*data->play.dy/tan(data->play.ray_ang);
	}
	else 
		return(10000); // colocar um numero coerente, seria o tamanho do mapa

	return (ft_loop_distance(data));
}



static float ft_vertical_wall (t_cub *data)
{
	
	if(cos(data->play.ray_ang) > 0.001593) // direito
    {
		data->play.dx = TEXTURE_SIZE;
		data->play.dy = 1*tan (data->play.ray_ang) * data->play.dx;
		data->play.xo = ceil(data->play.x /TEXTURE_SIZE) *TEXTURE_SIZE+ 0.00001;
		data->play.yo  = 1* tan (data->play.ray_ang) *(data->play.xo - data->play.x) + data->play.y;

    	
    } 
	else if(cos(data->play.ray_ang) < - 0.001593) // esquerdo
	{
		data->play.dx = -1 * TEXTURE_SIZE;
		data->play.dy = -1* tan (data->play.ray_ang) * data->play.dx;
			data->play.xo = floor( data->play.x/TEXTURE_SIZE) *TEXTURE_SIZE - 0.00001 ;
		data->play.yo =  tan (data->play.ray_ang) *(data->play.xo  - data->play.x) + data->play.y;
	
        
	}
	else 
		return(10000); // colocar um numero coerente, seria o tamanho do mapa

	return (ft_loop_distance(data));
}














float ft_loop_distance(t_cub *cub )
{
	int i;
	int j;
    
	i =  floor(cub->play.yo /TEXTURE_SIZE);
	j =  floor(cub->play.xo  /TEXTURE_SIZE);
	printf("\n(%d %d)=%c ", i, j , cub->data.map[i][j]);
	while ( cub->data.map[i][j]== '0')
	{
		cub->play.yo += cub->play.dy;
		cub->play.xo += cub->play.dx;
		i =  floor(cub->play.yo  /TEXTURE_SIZE);
		j =  floor(cub->play.xo  /TEXTURE_SIZE);
		// criar um delimitado caso i e j estiver fora do mapa, retonar um numero grande
		printf("\n(%d %d)=%c ", i, j , cub->data.map[i][j]);
	}
	return(ft_distance(cub->play.x, cub->play.y, cub->play.xo, cub->play.yo));
}


int ft_round(float number)
{
	if( number -  floor(number) <= 0.5)
		return (floor(number));
	else 
		return (ceil(number));
}