/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:53:28 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 21:44:35 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_size_wall(t_cub *cub)
{
	double	tmp;

	if (cub->play.dist == 0)
		return (0);
	tmp = TEXTURE_SIZE / cub->play.dist * (WIN_SIZE_X / (2 * tan (PI / 6)));
	return (ceil(tmp));
}
