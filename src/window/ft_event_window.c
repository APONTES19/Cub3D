/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:29:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/27 20:35:34 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

//arquivo criado para guardar coisas referentes a teclas e seus eventos.

static int ft_key_seta(int key, t_cub *cub);

int ft_key(int key, t_cub *cub)
{
	(void) cub;
	if (key == K_ESC || key == K_X)
		printf("key = Esc ou X Mudar a Função aqui %d\n\n", key);
		// mudar aqui atenção colocar uma função de sair do game.
	else if (key == K_A)
		printf("key = A %d\n\n", key);
	else if (key == K_D)
	{
		printf("key = D %d\n\n", key);
		cub->play.x -= 10;
	}
	else if (key == K_W)
		printf("key = W %d\n\n", key);
	else if (key == K_S)
		printf("key = S %d\n\n", key);
	else
		ft_key_seta(key, cub);

	return(0);
}

static int ft_key_seta(int key, t_cub *cub)
{
	(void) cub;
	if ( key == K_LEFT)
	{
		printf("key = LEFT %d and play x = %f\n\n", key,cub->play.x);
		cub->play.x = cub->play.x + 24;
	}
	else if ( key == K_RIGTH)
		printf("key = RIGTH %d\n\n", key);
	else if ( key == K_UP)
		printf("key = UP %d\n\n", key);
	else if (key == K_DOWN)
		printf("key = DOWN %d\n\n", key);
	else
		printf("\n	Use the keys to move\n\n"
			"                 w     \n"
			"                 ▲     \n"
			"             a ◀ ▼ ▶ d \n"
			"                 s    \n");
	return(0);
}
