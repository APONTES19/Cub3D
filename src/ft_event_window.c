/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:29:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/06 21:15:14 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

//arquivo criado para guardar coisas referentes a teclas e seus eventos.

int ft_key(int key, t_win *win)
{
	(void) win;
	if (key == K_ESC || key == K_X)
		printf("key = Esc ou X Mudar a Função aqui %d\n\n", key);
		// mudar aqui atenção colocar uma função de sair do game.
	else if (key == K_A || key == K_LEFT)
		printf("key = A %d\n\n", key);
	else if (key == K_D || key == K_RIGTH)
		printf("key = D %d\n\n", key);
	else if (key == K_W || key == K_UP)
		printf("key = W %d\n\n", key);
	else if (key == K_S || key == K_DOWN)
		printf("key = S %d\n\n", key);
	else
		printf("\n	Use the keys to move\n\n"
			"                 w     \n"
			"                 ▲     \n"
			"             a ◀ ▼ ▶ d \n"
			"                 s    \n"
			"key number = %d", key);

	return(0);
}
