/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:03:04 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/12 03:19:48 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int ft_check_line_position(char **text)
{
	int	i;
	int map;
	int code;

	i = -1;
	map = 0;
	while(text[++i])
	{
		code = ft_line_code(text[i]);
		if ( code == WALL && map == 0)
			map = 1;
		if(map == 1 && code != WALL)
			map = 2;
		if(map == 2 && code != NEW_LINE && code != END)
			return(ft_error_message(ERROR_LINE_WRONG_POSITION, text[i]));
	}
	return (SUCCESS);
}
