/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/27 20:55:30 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"



void	ft_init_window(t_cub *cub)
{
	cub->w.mlx = mlx_init();
	if (cub->w.mlx == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro init mlx failed");
	cub->w.win = mlx_new_window(cub->w.mlx, WIN_SIZE_X,
		WIN_SIZE_Y, "Cub 3D");
	if (cub->w.win == NULL)
		ft_error_message(ERROR_WIN, "\t- Erro creat window");
	
}

