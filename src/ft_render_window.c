/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:36:01 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/27 12:39:44 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

//arquivo para colocarmos tudo relacionado a imagens

static int ft_render(t_win *win)
{
	void *img;
	int	x;
	int y;

	img = mlx_xpm_file_to_image(win->mlx, "../img/bricks.xpm", &x, &y);

	int g;
	g = 0;
	while(g <= 735)
	{
		mlx_put_image_to_window(win->mlx, win->scr, img, g, 0);
		g += 65;
	}
	return(0);
}
