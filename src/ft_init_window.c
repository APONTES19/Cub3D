/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/06 21:05:26 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static void	ft_creat_window(t_win *win);
static void	ft_hook_window(t_win *win);

void	ft_init_window(t_win *win)
{
	if (win->size_x < 300 || win->size_y < 300)
		ft_error_message(ERROR_WIN, "\t- Over size screen or title null!");
	win->mlx = mlx_init();
	if (win->mlx == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro init mlx failed");
	ft_creat_window(win);
	ft_hook_window(win);
}

void	ft_creat_window(t_win *win)
{
	win->scr = mlx_new_window(win->mlx, win->size_x, win->size_y, "Cub 3D");
	if (win->scr == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro creat window");
}

void	ft_hook_window(t_win *win)
{
	//botão de close
	mlx_hook(win->scr, 17, 0, ft_close_window, win);
	//teclas de game monitoradas
	mlx_key_hook(win->scr, &ft_key, &win);
	//imagens a ser carregadas
	mlx_expose_hook(win->scr, &ft_render, win);
}
