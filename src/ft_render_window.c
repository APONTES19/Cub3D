/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:36:01 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/06 21:08:29 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

//arquivo para colocarmos tudo relacionado a imagens

int ft_render(t_win *win)
{
	void *img;
	int	x;
	int y;

	img = mlx_xpm_file_to_image(win->mlx, "../img/bricks.xpm", &x, &y);
	if (!img)
		ft_error_message(800, "erro na imagem");
	mlx_put_image_to_window(win->mlx, win->scr, img, 0, 0);
	return(0);
}
