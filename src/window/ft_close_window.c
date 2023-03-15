/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:07:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/06 21:31:54 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static void	ft_exit_game();
static void	ft_free_null(void **ptr);

int	ft_close_window(t_cub *cub)
{
	printf("Fechando a Tela\n");
	if (cub->win.scr)
		mlx_destroy_window(cub->win.mlx, cub->win.scr);
	if (cub->win.mlx)
	{
		mlx_destroy_display(cub->win.mlx);
		ft_free_null((void *) &cub->win.mlx);
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
