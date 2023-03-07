/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:36:01 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/06 23:26:40 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

//arquivo para colocarmos tudo relacionado a imagens

int ft_render(t_cub *cub)
{
	void *img;
	int	u;
	int v;

	img = mlx_xpm_file_to_image(cub->win.mlx, "../img/north_texture.xpm", &u, &v);
	if (!img)
		ft_error_message(800, "erro na imagem");
	mlx_put_image_to_window(cub->win.mlx, cub->win.scr, img, u, v) ;
	return(0);
}
