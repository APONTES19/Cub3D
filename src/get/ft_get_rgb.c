/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rgb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:13:09 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/30 22:16:33 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	ft_rgb_to_hex(t_cub *cub)
{
	cub->data.c_floor = (cub->data.fr << 16 | cub->data.fg << 8 | cub->data.fb);
	cub->data.c_ceiling = (cub->data.cr << 16
			| cub->data.cg << 8 | cub->data.cb);
}
