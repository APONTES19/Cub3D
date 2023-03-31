/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:28:42 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 21:26:59 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	ft_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*tmp;

	tmp = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *) tmp = color;
}
