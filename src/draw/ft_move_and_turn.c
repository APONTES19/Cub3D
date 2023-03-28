/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_and_turn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 04:35:14 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/28 06:08:35 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static void ft_move_utils(t_cub *cub);
static void ft_turn_utils(t_cub *cub);

int ft_move_and_turn(t_cub *cub)
{
	if (cub->play.move == UP && 
	ft_iswall(cub->data.map, cub->play.y -  2 * sin(cub->play.ang), cub->play.x + 2 * cos(cub->play.ang) )  == FAILURE) // move para esquerda
	{
		cub->play.x += 2 * cos(cub->play.ang);
		cub->play.y -= 2 * sin(cub->play.ang);
	}
	else if (cub->play.move == DOWN && 
	ft_iswall(cub->data.map, cub->play.y +  2 * sin(cub->play.ang), cub->play.x - 2 * cos(cub->play.ang) )  == FAILURE) // move para esquerda
	{
		cub->play.x -= 2 * cos(cub->play.ang);
		cub->play.y += 2 * sin(cub->play.ang);
	}
	ft_move_utils(cub);
	ft_turn_utils(cub);
	ft_raycast(cub);
	return (0);

}

static void ft_move_utils(t_cub *cub)
{

	if (cub->play.move == RIGHT && 
	ft_iswall(cub->data.map, cub->play.y +  2 * cos(cub->play.ang), cub->play.x + 2 * sin(cub->play.ang) )  == FAILURE) // move para esquerda
	{
		cub->play.x += 2 * sin(cub->play.ang);
		cub->play.y += 2 * cos(cub->play.ang);
	}
	else if (cub->play.move == LEFT && 
	ft_iswall(cub->data.map, cub->play.y -  2 * cos(cub->play.ang), cub->play.x - 2 * sin(cub->play.ang) )  == FAILURE) // move para esquerda
	{
		cub->play.x -= 2 * sin(cub->play.ang);
		cub->play.y -= 2 * cos(cub->play.ang);
	}

}


static void ft_turn_utils(t_cub *cub)
{
	if (cub->play.turn == LEFT)
		cub->play.ang = ft_radian_domain(cub->play.ang + PI / 180);
	if (cub->play.turn == RIGHT)
		cub->play.ang = ft_radian_domain(cub->play.ang - PI / 180);
}