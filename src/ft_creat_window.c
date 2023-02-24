/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/21 23:59:58 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

typedef struct win
{
	void	*scr;
	void	*ptr;
}	t_win;

static int	ft_close_window(t_win *win);
static int ft_render(t_win *win);


void	ft_creat_window(int x, int y, char *title)
{
	t_win	win;

	if (x < 100 || y < 100 || title == NULL)
	{
		ft_error_message(ERROR_WIN, "\t- Over size screen or title null!");
	}
	win.ptr = mlx_init();
	win.scr = mlx_new_window(win.ptr, x, y, title);
	if (win.scr == NULL)
	{
		ft_error_message(ERROR_WIN, " ");
	}
	ft_render(&win);
	mlx_hook(win.scr, 33, 1L << 17, &ft_close_window, &win);
	mlx_expose_hook(win.scr, &ft_render, &win);
	mlx_loop(win.ptr);
}

static int	ft_close_window(t_win *win)
{
	printf("fechando a tela\n");
	// mlx_clear_window(win->ptr, win->scr);
	// mlx_loop_end(win->ptr);
	mlx_destroy_window(win->ptr, win->scr);
	mlx_destroy_display(win->ptr);
	// ft_free_one_point(win->ptr);
	// free(win);
	return (0);
}

static int ft_render(t_win *win)
{
	int *img;
	int	x;
	int y;
	img = mlx_xpm_file_to_image(win->ptr, "./img/bricks.xpm", &x, &y);

	mlx_put_image_to_window(win->ptr, win->scr, img, 0, 0);
	return(0);
}
