/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:53:28 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/28 23:48:42 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/cub3d.h"


int ft_size_wall(t_cub *cub)
{
	float tmp;
	if(cub->play.dist == 0)
		return (0);
	tmp = TEXTURE_SIZE * WIN_SIZE_Y / cub->play.dist;
	if(tmp > WIN_SIZE_Y)
		return(WIN_SIZE_Y);
	return (ceil(tmp));
}

/*

	float tmp;
	if(cub->play.dist == 0)
		return (0);
	tmp = TEXTURE_SIZE / cub->play.dist * floor( WIN_SIZE_Y/(2* tan(PI/6)));
	return (ceil(tmp));



*/