/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 05:35:29 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 21:41:17 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	ft_choice_wall(t_cub *cub, int i);
void	ft_drawn_wall(t_cub *cub, t_img *image, int i);

void	ft_drawn(t_cub *cub)
{
	int	i;
	int	size;
	int	start_wall;

	size = ft_size_wall (cub);
	start_wall = floor ((WIN_SIZE_Y - size) / 2);
	i = 0;
	while (i < WIN_SIZE_Y)
	{
		if (i < start_wall)
			ft_mlx_pixel_put(cub->w.image, cub->play.ray, i,
				cub->data.c_ceiling);
		else if (i > start_wall + size)
			ft_mlx_pixel_put (cub->w.image, cub->play.ray, i,
				cub->data.c_floor);
		else
			ft_choice_wall (cub, i);
		i++;
	}
}

void	ft_choice_wall(t_cub *cub, int i)
{
	if (cub->play.status == VERTICAL && (ft_radian_domain(cub->play.ray_ang)
			<= PI / 2 || ft_radian_domain(cub->play.ray_ang) >= 3 * PI / 2))
		ft_drawn_wall (cub, cub->w.ea, i);
	else if (cub->play.status == VERTICAL)
		ft_drawn_wall (cub, cub->w.we, i);
	else if (cub->play.status == HORIZONTAL
		&& ft_radian_domain(cub->play.ray_ang) <= PI)
		ft_drawn_wall (cub, cub->w.no, i);
	else
		ft_drawn_wall (cub, cub->w.so, i);
}

void	ft_drawn_wall(t_cub *cub, t_img *image, int i)
{
	int	offset_x;
	int	offset_y;
	int	size;

	if (cub->play.status == HORIZONTAL)
		offset_x = (int)floor (cub->play.x + cub->play.dist
				* cos(cub->play.ray_ang)) % TEXTURE_SIZE;
	else
		offset_x = (int) floor(cub->play.y - cub->play.dist
				* sin(cub->play.ray_ang)) % TEXTURE_SIZE;
	offset_x = offset_x % image->bits_per_pixel;
	size = ft_size_wall(cub);
	if (size == 0)
		offset_y = 0;
	else
		offset_y = ((image->bits_per_pixel) * (i - (WIN_SIZE_Y - size) / 2))
			/size;
	ft_mlx_pixel_put(cub->w.image, cub->play.ray, i, ft_mlx_pixel_get(image,
			offset_x, offset_y));
}
