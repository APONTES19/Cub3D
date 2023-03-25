/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 03:54:22 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/25 04:16:53 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


int ft_iswall(char **map, float i, float j)
{
	int x;
	int y;

	y = (int)  floor(i /TEXTURE_SIZE);
	x = (int)   floor(j /TEXTURE_SIZE);
	if( map[y][x] == '1')
		return (SUCCESS);
	return (FAILURE);
}