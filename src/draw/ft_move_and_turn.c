/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_and_turn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 04:35:14 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/25 06:52:18 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void ft_move_and_turn(t_cub *cub)
{
	if (cub->play.move == UP && 
	ft_iswall(cup->data.map, cub->player.y -  2 * sin(cub->player.ang), cub->player.x + 2 * cos(cub->player.ang) )  == SUCCESS) // move para esquerda
	{
		cub->player.x += 2 * cos(cub->player.ang);
		cub->player.y -= 2 * sin(cub->player.ang);
	}
	else if (cub->play.move == DOWN && 
	ft_iswall(cup->data.map, cub->player.y +  2 * sin(cub->player.ang), cub->player.x - 2 * cos(cub->player.ang) )  == SUCCESS) // move para esquerda
	{
		cub->player.x -= 2 * cos(cub->player.ang);
		cub->player.y += 2 * sin(cub->player.ang);
	}
	if (cub->play.move == RIGHT && 
	ft_iswall(cup->data.map, cub->player.y +  2 * cos(cub->player.ang), cub->player.x + 2 * sin(cub->player.ang) )  == SUCCESS) // move para esquerda
	{
		cub->player.x += 2 * sin(cub->player.ang);
		cub->player.y += 2 * cos(cub->player.ang);
	}
	else if (cub->play.move == LEFT && 
	ft_iswall(cup->data.map, cub->player.y -  2 * cos(cub->player.ang), cub->player.x - 2 * sin(cub->player.ang) )  == SUCCESS) // move para esquerda
	{
		cub->player.x -= 2 * sin(cub->player.ang);
		cub->player.y -= 2 * cos(cub->player.ang);
	}
	


    
}

