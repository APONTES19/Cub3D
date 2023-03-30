/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawn_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:58:11 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/29 21:50:56 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

// estou usando so para salvar o codigo 


void ft_drawn_wall(t_cub *cub, int i)
{
	int offset;
	int	k;
	int j;
	
	if(cub->play.status == HORIZONTAL)
		offset = (int)floor( cub->play.x + cub->play.dist * cos(cub->play.ray_ang)) % TEXTURE_SIZE;
	else
	    offset = (int) floor( cub->play.y - cub->play.dist * sin(cub->play.ray_ang)) % TEXTURE_SIZE;
	 

	j = -1;
	k = -1;
	while(++j <  ft_size_wall(cub))
	{
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i +j, ft_mlx_pixel_get(cub->w.no, 
		offset % cub->w.no->bits_per_pixel , ++k));
		if(k < ft_size_wall(cub) % cub->w.no->bits_per_pixel )
			k = -1;
	}
}



// codigo rodando perfeito
void ft_choice_wall(t_cub *cub, int i)
{
	if (cub->play.status == VERTICAL && (ft_radian_domain(cub->play.ray_ang) <= PI / 2 || ft_radian_domain(cub->play.ray_ang) >= 3 * PI / 2))
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x00FFFF00); //E (leste) amarelo ( direito caso estiver olhando para norte)
	else if (cub->play.status == VERTICAL) 
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x00008000); // W (oeste) verde ( esquerdo caso estiver olhando para norte
	else if (cub->play.status == HORIZONTAL && ft_radian_domain(cub->play.ray_ang)  <= PI)
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x00FF0000); //N -> vermelho
	else 
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x000000FF); // S -> Azul
}






void ft_choice_wall(t_cub *cub, int i);

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
    {
		ft_choice_wall(cub,  i);
    }
			
		else 
			ft_mlx_pixel_put(cub->w.image,  cub->play.ray,i, cub->data.c_floor);
    	i++;
    }

}

void ft_choice_wall(t_cub *cub, int i)
{
	if (cub->play.status == VERTICAL && (ft_radian_domain(cub->play.ray_ang) <= PI / 2 || ft_radian_domain(cub->play.ray_ang) >= 3 * PI / 2))
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x00FFFF00); //E (leste) amarelo ( direito caso estiver olhando para norte)
	else if (cub->play.status == VERTICAL) 
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x00008000); // W (oeste) verde ( esquerdo caso estiver olhando para norte
	else if (cub->play.status == HORIZONTAL && ft_radian_domain(cub->play.ray_ang)  <= PI)
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x00FF0000); //N -> vermelho
	else 
		ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,  0x000000FF); // S -> Azul
}