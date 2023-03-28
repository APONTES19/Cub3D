/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 03:54:22 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/28 05:18:58 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int ft_iswall(char **map, float i, float j)
{
	int x;
	int y;
	int line_size;
	int column_size;

	line_size = -1;
	column_size = 0; 
	while(map[++line_size])
	{
		if(column_size  < (int)ft_strlen(map[line_size]))
			column_size = ft_strlen(map[line_size]);
	}
	y = (int)  floor(i /TEXTURE_SIZE);
	x = (int)   floor(j /TEXTURE_SIZE);
	
	if(x < 0 || y < 0  || x > column_size || y > line_size - 1)
		return (-1);
	if( map[y][x] == '0')
		return (FAILURE);
	else 
		return(SUCCESS);
}