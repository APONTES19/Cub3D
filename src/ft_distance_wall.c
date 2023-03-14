/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance_wall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:16:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/14 11:13:32 by ryoshio-         ###   ########.fr       */
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

	printf(" \n(H,V)= (%f, %f)=", dh, dv);
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
		
	if(sin(data->play.ray_ang) > 0.01 ) // olhando para cima
    {
		data->play.dy = -1* TEXTURE_SIZE;
		data->play.yo  = floor( data->play.y /TEXTURE_SIZE) * TEXTURE_SIZE - 1 ;
		data->play.xo = (data->play.y -data->play.yo)/tan (data->play.ray_ang) +  data->play.x;
    	data->play. dx =  TEXTURE_SIZE /tan(data->play.ray_ang);

		//printf("\n (xo, yxo) = (%f, %f ) e (dx, dy) = (%f, %f)", data->play.xo, data->play.yo,    data->play.dx, data->play.dy );
    } 
	else if(sin(data->play.ray_ang) < -0.01) // olhando para baixo
	{
		data->play.dy = TEXTURE_SIZE;
		data->play.yo = ceil(data->play.y/TEXTURE_SIZE)*TEXTURE_SIZE  + 1;
		data->play.xo = (data->play.y -data->play.yo)/tan (data->play.ray_ang) +  data->play.x;
        data->play.dx = TEXTURE_SIZE /tan(data->play.ray_ang);
	}
	else 
		return(10000); // colocar um numero coerente, seria o tamanho do mapa
	
   // return (1);
	return (ft_loop_distance(data));
}



float ft_vertical_wall (t_cub *data)
{
	
	if(cos(data->play.ray_ang) > 0.35) // direito
    {
		data->play.dx = TEXTURE_SIZE;
	data->play.dy =  1*tan (data->play.ray_ang) * TEXTURE_SIZE;
		data->play.xo = floor(data->play.x /TEXTURE_SIZE) *TEXTURE_SIZE + TEXTURE_SIZE;
		data->play.yo = 1* tan (data->play.ray_ang) *(data->play.x  - data->play.xo) + data->play.y;
	
    	
    } 
	else if(cos(data->play.ray_ang) < -0.4) // esquerdo
	{
		data->play.dx = -1 * TEXTURE_SIZE;
		data->play.dy =  tan (data->play.ray_ang) * TEXTURE_SIZE;
		data->play.xo = ceil( data->play.x/TEXTURE_SIZE) *TEXTURE_SIZE  + 1 ;
		data->play.yo =  tan (data->play.ray_ang) *(data->play.x  - data->play.xo) + data->play.y;
	
        
	}
	else 
		return(10000); // colocar um numero coerente, seria o tamanho do mapa
	return (ft_loop_distance(data));
}




 float ft_loop_distance(t_cub *cub )
{
	int i;
	int j;
    
	i = (int)  floor(cub->play.yo /TEXTURE_SIZE);
	j = (int)   floor(cub->play.xo  /TEXTURE_SIZE);

 	while ( cub->data.map[i][j]== '0')
	{
		cub->play.yo += cub->play.dy;
		cub->play.xo += cub->play.dx;
		i =(int)   floor(cub->play.yo  /TEXTURE_SIZE);
		j = (int)  floor(cub->play.xo  /TEXTURE_SIZE);

	
	}
//	printf("\n (xo, yxo) = (%f, %f )", cub->play.xo, cub->play.yo);
//	printf("(i,j)= (%d, %d)", i, j);
	return(ft_distance(cub->play.x, cub->play.y, cub->play.xo, cub->play.yo));
}

