/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:55:11 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/27 21:11:10 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

void	ft_hook_window(t_cub *cub)
{
	mlx_loop_hook(cub->w.mlx, ft_move_and_turn, cub);
	
	mlx_hook(cub->w.win, KEY_PRESSED, KEY_PRESSED_MASK, ft_key_pressed, cub); //precionando a tecla
	mlx_hook(cub->w.win, KEY_UNPRESSED, KEY_UNPRESSED_MASK, ft_key_unpressed, cub); // desprecionando a tecla
	
	//botão de close
	mlx_hook(cub->w.win, 17, 0, ft_close_window, cub);

	mlx_loop(cub->w.mlx);
}
