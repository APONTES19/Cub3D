/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:57:27 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/02 23:50:52 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

void ft_game_init(t_cub *data,  t_win *win)
{
	win->size_x = 800;
	win->size_y = 800;
	win->no = ft_texture(data->no_path, win->mlx);
	win->so = ft_texture(data->so_path, win->mlx);
	win->we = ft_texture(data->we_path, win->mlx);
	win->ea = ft_texture(data->ea_path, win->mlx);
}

