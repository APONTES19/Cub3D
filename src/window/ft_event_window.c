/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:29:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/30 22:20:08 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_key_pressed(int key, t_cub *cub)
{
	if (key == K_ESC || key == K_X)
		ft_close_window(cub);
	else if (key == K_A)
		cub->play.move = LEFT;
	else if (key == K_D)
		cub->play.move = RIGHT;
	else if (key == K_W || key == K_UP)
		cub->play.move = UP;
	else if (key == K_S || key == K_DOWN)
		cub->play.move = DOWN;
	if (key == K_LEFT)
		cub->play.turn = LEFT;
	else if (key == K_RIGTH)
		cub->play.turn = RIGHT;
	return (0);
}

int	ft_key_unpressed(int key, t_cub *cub)
{
	if (key == K_A)
		cub->play.move = STOP;
	else if (key == K_D)
		cub->play.move = STOP;
	else if (key == K_W || key == K_UP)
		cub->play.move = STOP;
	else if (key == K_S || key == K_DOWN)
		cub->play.move = STOP;
	if (key == K_LEFT)
		cub->play.turn = STOP;
	else if (key == K_RIGTH)
		cub->play.turn = STOP;
	return (0);
}
