/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_pixel_get.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:31:51 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/29 17:01:01 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_mlx_pixel_get(t_img *img, int x, int y)
{
	char	*byte;

	byte = img->addr + ((y * img->line_length)
			+ (x * img->bits_per_pixel / 8));
	return (*(unsigned int *)byte);
}


