/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:36:01 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/27 20:34:46 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int ft_render(t_cub *cub)
{
	//printf("%f", cub->play.x);
	ft_background(cub);
	ft_print_gamer(cub);
	return(0);
}

void ft_background(t_cub *cub)
{
	int i;
	int j;

	cub->img.img = mlx_new_image(cub->w.mlx, WIN_SIZE_X, WIN_SIZE_Y);
	cub->img.addr = mlx_get_data_addr(cub->img.img,&cub->img.bits_per_pixel,
		&cub->img.line_length, &cub->img.endian);

	i = 0;
	j = 0;
	while (i <WIN_SIZE_Y)
	{
		j = 0;
		while (j <= WIN_SIZE_X )
		{
			if(i <= WIN_SIZE_Y / 2)
				ft_mlx_pixel_put(&cub->img, j, i, cub->data.c_ceiling);
			else
				ft_mlx_pixel_put(&cub->img, j, i, cub->data.c_floor);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(cub->w.mlx,cub->w.win,cub->img.img,0,0);
}


void ft_print_gamer(t_cub *cub)
{
	int yellow;
	int ix;
	int iy;

	yellow = ft_to_hex(255, 255, 0);

	iy = cub->play.y - 24;
	while (iy <=cub->play.y)
	{
		ix = cub->play.x - 24;
		while(ix<=cub->play.x)
		{
			mlx_pixel_put(cub->w.mlx, cub->w.win, ix, iy, yellow);
			ix++;
		}
		iy++;
	}
}
