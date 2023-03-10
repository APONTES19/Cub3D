/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/08 22:08:49 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static void	ft_creat_window(t_cub *cub);
static void	ft_hook_window(t_cub *cub);


void	ft_init_window(t_cub *cub)
{
	cub->win.mlx = mlx_init();
	if (cub->win.mlx == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro init mlx failed");
	ft_creat_window(cub);
	ft_hook_window(cub);
}

void	ft_creat_window(t_cub *cub)
{
	cub->win.scr = mlx_new_window(cub->win.mlx, WIN_SIZE_X,
		WIN_SIZE_Y, "Cub 3D");
	if (cub->win.scr == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro creat window");
}

void	ft_hook_window(t_cub *cub)
{
	//botão de close
	mlx_hook(cub->win.scr, 17, 0, ft_close_window, cub);
	//teclas de game monitoradas
	mlx_key_hook(cub->win.scr, &ft_key, &cub);
	//imagens a ser carregadas
	//mlx_expose_hook(cub->win.scr, &ft_render, cub);
	ft_background(cub);
	ft_render(cub);
}


