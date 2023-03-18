/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:07:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/17 22:28:07 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

// static void	ft_exit_game();
// static void	ft_free_null(void **ptr);

int	ft_close_window(t_cub *cub)
{
	mlx_clear_window(cub->w.mlx, cub->w.win);
	mlx_loop_end(cub->w.mlx);
	mlx_destroy_window(cub->w.mlx, cub->w.win);
	mlx_destroy_display(cub->w.mlx);
	free(cub->w.mlx);
	//chamar função que da free na estrutura inteira
	exit(3);
	return (0);
}

// static void	ft_free_null(void **ptr)
// {
// 	if (*ptr != NULL)
// 		free(*ptr);
// 	*ptr = NULL;
// }


// static void ft_exit_game()
// {
// 	printf("chamar aqui as funções para encerrar as memórias alocadas\n");
// }
