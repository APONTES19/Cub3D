/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:36:01 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/13 22:50:24 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"



int ft_render(t_cub *cub)
{
	void *img;
	int	u;
	int v;

	img = mlx_xpm_file_to_image(cub->win.mlx, "./img/north_texture.xpm", &u, &v);

	if (!img)
		ft_error_message(800, "erro na imagem");
	mlx_put_image_to_window(cub->win.mlx, cub->win.scr, img, (WIN_SIZE_X/2), (WIN_SIZE_Y/2 - 15)) ;
	return(0);
}

void ft_background(t_cub *cub)
{
	cub->img.img = mlx_new_image(
								  cub->win.mlx,
								  WIN_SIZE_X,
								  WIN_SIZE_Y
					);
	if(!cub->img.img)
		printf("BO\n");
	cub->img.addr = mlx_get_data_addr(
									   cub->img.img,
									   &cub->img.bits_per_pixel,
									   &cub->img.line_length,
									   &cub->img.endian
					 );
	if(!cub->img.addr)
		printf("BO2\n");

	int i;
	int j;

	i = 0;
	j = 0;
	while (i <WIN_SIZE_Y)
	{
		j = 0;
		while (j < WIN_SIZE_X )
		{
			if(i < WIN_SIZE_Y/2)
				ft_mlx_pixel_put(
								 &cub->img,
								 j,
								 i,
								 cub->data.c_ceiling
				);
			else
				ft_mlx_pixel_put(
				 &cub->img,
				 j,
				 i,
				 cub->data.c_floor
			);
			j++;
		}
		i++;
	}

	mlx_put_image_to_window(
							cub->win.mlx,
							cub->win.scr,
							cub->img.img,
							0,
							0
	);
	if(!cub->img.addr)
		printf("BO4\n");
}


