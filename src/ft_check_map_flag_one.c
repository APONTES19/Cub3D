/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_flag_one.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:19:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/04 17:47:52 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_map_flag_one(int fd, char c)
{
	char	*line;
	int	map;
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	map = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		while(line[i] == ' ')
			i++;
		if(ft_isdigit(line[i]) && flag == 0)
			map++;
		if(line[i] == c)
			flag++;
		ft_free_one_point(line);
		i = 0;
	}
	ft_free_one_point(line);
	if (flag == 1 && map == 0)
		return(SUCCESS);
	return(FAILURE);
}
