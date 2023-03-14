/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:53:28 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/14 11:32:37 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/cub3d.h"


int ft_size_wall(t_cub *cub)
{
float tmp;
	if(cub->play.dist < 0.0001)
		return (0);
	tmp = TEXTURE_SIZE / cub->play.dist * floor( WIN_SIZE_Y/(2* tan(PI/6)));
	if(tmp > WIN_SIZE_Y)
		return(WIN_SIZE_Y);
	return (ceil(tmp));
	

}


/*




float tmp;

printf("j =%f", cub->play.dist);
	tmp = 64 *WIN_SIZE_Y /cub->play.dist;
	if( tmp > WIN_SIZE_Y)
		return(WIN_SIZE_Y);
	else 
		return (ceil(tmp));



float tmp;
	if(cub->play.dist < 0.0001)
		return (0);
	tmp = TEXTURE_SIZE / cub->play.dist * floor( WIN_SIZE_Y/(2* tan(PI/6)));
		return (0);
	if(tmp > WIN_SIZE_Y)
		return(WIN_SIZE_Y);
	return (ceil(tmp));



*/