/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:07:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/27 12:54:11 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static void	ft_exit_game();
static void	ft_free_null(void **ptr);

int	ft_close_window(t_win *win)
{
	printf("Fechando a Tela\n");
	if (win->scr)
		mlx_destroy_window(win->mlx, win->scr);
	if (win->mlx)
	{
		mlx_destroy_display(win->mlx);
		ft_free_null((void *) &win->mlx);
	}
// 	mlx_clear_window(win->mlx, win->scr);
// 	mlx_loop_end(win->mlx);
	ft_exit_game();
	return (0);
}

static void	ft_free_null(void **ptr)
{
	if (*ptr != NULL)
		free(*ptr);
	*ptr = NULL;
}


static void ft_exit_game()
{
	printf("chamar aqui as funções para encerrar as memórias alocadas\n");
}
