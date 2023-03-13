/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:53:28 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/13 04:25:52 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/cub3d.h"


int ft_size_wall(t_cub *cub)
{
	float aux;
	if(cub->play.dist < 0.0001)
		return (0);
	aux = TEXTURE_SIZE / cub->play.dist * floor( WIN_SIZE_X /(2* tan(PI/6)));
	return (ceil(aux));
}
