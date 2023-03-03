/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:08:00 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/28 23:57:51 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

void ft_game_init(t_cub *data,  t_win *win);
void ft_game(t_cub *data)
{
    t_win *win;

	win = malloc(sizeof (t_win));
	ft_game_init(data, win);

	ft_init_window(win);
	mlx_loop(win->mlx);
}


