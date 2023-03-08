/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:36:01 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/07 22:58:07 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

//arquivo para colocarmos tudo relacionado a imagens
static void ft_draw(t_cub *cub);
static void	ft_mlx_pixel_put(t_cub *cub, int x, int y, int color);


int ft_render(t_cub *cub)
{
	// void *img;
	// int	u;
	// int v;

	// img = mlx_xpm_file_to_image(cub->win.mlx, "../img/north_texture.xpm", &u, &v);
	// if (!img)
	// 	ft_error_message(800, "erro na imagem");
	// mlx_put_image_to_window(cub->win.mlx, cub->win.scr, img, u, v) ;
	ft_draw(cub);
	return(0);
}



static void	ft_mlx_pixel_put(t_cub *cub, int x, int y, int color)
{
	char    *dst;
    dst = cub->line.addr + (((y * cub->line.line_length) + x) * (cub->line.bits_per_pixel / 8));
	printf("dst => %s", dst);
	*(unsigned int*)dst = color;

}

static void ft_draw(t_cub *cub)
{
	cub->line.img = mlx_new_image(
								  cub->win.mlx,
								  WIN_SIZE_X,
								  WIN_SIZE_Y
					);
	if(!cub->line.img)
		printf("BO\n");
	cub->line.addr = mlx_get_data_addr(
									   cub->line.img,
									   &cub->line.bits_per_pixel,
									   &cub->line.line_length,
									   &cub->line.endian
					 );
	if(!cub->line.addr)
		printf("BO2\n");


	int i;
	int j;

	i = 0;
	j = 0;
	while (i < WIN_SIZE_Y)
	{
		j = 0;
		while (j < WIN_SIZE_X)
		{
			ft_mlx_pixel_put(
							 cub,
							 i,
							 j,
							 0x00FF0000
			);
			j++;
		}
		i++;
	}

	mlx_put_image_to_window(
							cub->win.mlx,
							cub->win.scr,
							cub->line.img,
							0,
							0
	);
	if(!cub->line.addr)
		printf("BO4\n");
}
