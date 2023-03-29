/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:53:28 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/29 14:26:38 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/cub3d.h"


int ft_size_wall(t_cub *cub)
{
	double tmp;
	if(cub->play.dist == 0)
		return (0);
	tmp = TEXTURE_SIZE / cub->play.dist * ( WIN_SIZE_X/(2* tan(PI/6)));
	return (ceil(tmp));


}

/*

	double tmp;
	if(cub->play.dist == 0)
		return (0);
	tmp = TEXTURE_SIZE / cub->play.dist * ( WIN_SIZE_X/(2* tan(PI/6)));
	return (ceil(tmp));


	double tmp;
	if(cub->play.dist == 0)
		return (0);
	tmp = TEXTURE_SIZE * WIN_SIZE_Y / cub->play.dist;
	if(tmp > WIN_SIZE_Y)
		return(WIN_SIZE_Y);
	return (ceil(tmp));



*/