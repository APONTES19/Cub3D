/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_flag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:14:01 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/07 15:57:42 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_map_flag(int fd, char *c)
{
	char	*line;
	int	map;
	int	flag;
	int	i;

	flag = 0;
	map = 0;
	while (1)
	{
		i = 0;
		line = get_next_line(fd);
		if (line == NULL)
			break;
		while(line[i] == ' ')
			i++;
		if(ft_isdigit(line[i]) && flag == 0)
			map++;
		if(line[i] == c[0] && line[i + 1] == c[1] && line[i + 2] == ' ')
			flag++;
		ft_free_one_point(line);
		
	}
	ft_free_one_point(line);
	if (flag == 1 && map == 0)
		return(SUCCESS);
	return(FAILURE);
}
