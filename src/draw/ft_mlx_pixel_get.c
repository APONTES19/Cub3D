/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_pixel_get.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:31:51 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 21:28:02 by lucasmar         ###   ########.fr       */
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
