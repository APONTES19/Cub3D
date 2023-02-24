/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:43:13 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/23 22:22:57 by lucasmar         ###   ########.fr       */
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
static int ft_key(int key, t_win *win);


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
	//ft_render(&win);
	mlx_key_hook(win.scr, &ft_key, &win);
	mlx_hook(win.scr, 33, 1L << 17, &ft_close_window, &win);
	mlx_expose_hook(win.scr, &ft_render, &win);
	mlx_loop(win.ptr);
}

static int	ft_close_window(t_win *win)
{
	printf("fechando a tela\n");
	mlx_clear_window(win->ptr, win->scr);
	mlx_loop_end(win->ptr);
	//mlx_destroy_display(win->ptr);
	mlx_destroy_window(win->ptr, win->scr);
	return (0);
}


static int ft_render(t_win *win)
{
	void *img;
	int	x;
	int y;

	img = mlx_xpm_file_to_image(win->ptr, "../img/bricks.xpm", &x, &y);

	int g;
	g = 0;
	while(g <= 735)
	{
		mlx_put_image_to_window(win->ptr, win->scr, img, g, 0);
		g += 65;
	}
	return(0);
}

static int ft_key(int key, t_win *win)
{
	(void) win;
	if (key == K_ESC)
		printf("key = Esc %d\n\n", key);
	else if (key == K_A || key == K_LEFT)
		printf("key = A %d\n\n", key);
	else if (key == K_D || key == K_RIGTH)
		printf("key = D %d\n\n", key);
	else if (key == K_W || key == K_UP)
		printf("key = W %d\n\n", key);
	else if (key == K_S || key == K_DOWN)
		printf("key = S %d\n\n", key);
	else
		printf("\n	Use the keys to move\n\n"
			"                 w     \n"
			"                 ▲     \n"
			"             a ◀ ▼ ▶ d \n"
			"                 s    \n");
	return(0);
}
