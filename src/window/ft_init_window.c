/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/26 12:24:52 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static void	ft_hook_window(t_cub *cub);

void	ft_init_window(t_cub *cub)
{
	cub->w.mlx = mlx_init();
	if (cub->w.mlx == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro init mlx failed");
	cub->w.win = mlx_new_window(cub->w.mlx, WIN_SIZE_X,
		WIN_SIZE_Y, "Cub 3D By Lucas and Ricardo");
	if (cub->w.win == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro creat window");
	ft_render(cub);
	ft_hook_window(cub);
}

void	ft_hook_window(t_cub *cub)
{
	mlx_hook(cub->w.win, 17, 0, ft_close_window, cub);
	mlx_loop(cub->w.mlx);
}
