/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:29:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/28 21:33:07 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

//arquivo criado para guardar coisas referentes a teclas e seus eventos.



int ft_key_pressed(int key, t_cub *cub) 
{
	if (key == K_ESC || key == K_X) // x realmente fecha?
	{
		printf("key = Esc ou X Mudar a Função aqui %d\n\n", key);
		ft_close_window(cub);
	}
	else if (key == K_A) // move para esquerda
		cub->play.move = LEFT;
	else if (key == K_D)  // move para direita
		cub->play.move = RIGHT;
	else if (key == K_W ||  key == K_UP)
		cub->play.move = UP;
	else if (key == K_S || key == K_DOWN)
		cub->play.move = DOWN;
	if ( key == K_LEFT)
		cub->play.turn = LEFT;
	else if ( key == K_RIGTH)
		cub->play.turn = RIGHT;
	else
		printf("\n	Use the keys to move\n\n"
			"                 w     \n"
			"                 ▲     \n"
			"             a ◀ ▼ ▶ d \n"
			"                 s    \n");


	return(0);
}


int ft_key_unpressed(int key, t_cub *cub)
{

	if (key == K_A) // move para esquerda
		cub->play.move = STOP;
	else if (key == K_D)  // move para direita
		cub->play.move = STOP;
	else if (key == K_W ||  key == K_UP)
		cub->play.move = STOP;
	else if (key == K_S || key == K_DOWN)
		cub->play.move = STOP;
	if ( key == K_LEFT)
		cub->play.turn = STOP;
	else if ( key == K_RIGTH)
		cub->play.turn = STOP;
	return(0);
}
