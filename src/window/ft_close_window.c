/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:07:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/15 21:17:58 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

// static void	ft_exit_game();
// static void	ft_free_null(void **ptr);

int	ft_close_window(t_cub *cub)
{
	printf("Fechando a Tela\n");
	// mlx_loop_end(cub->w.mlx);
	// (void) cub;
// 	if (cub->w.win)
		mlx_destroy_window(cub->w.mlx, cub->w.win);
// 	if (cub->w.mlx)
// 	{
		mlx_destroy_display(cub->w.mlx);
		// free(cub->w.mlx);
// 		ft_free_null((void *) &cub->w.mlx);
// 	}
// // 	mlx_clear_window(win->mlx, win->scr);
// 	ft_exit_game();
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
