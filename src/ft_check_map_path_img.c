/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_path_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:18:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/06 11:24:48 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_map_path_img(int fd, char *c)
{
	char	*line;
	char	**list_line;
	char	*path_file;
	int		f;

	f = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		list_line = ft_split(line,' ');
		if (ft_strnstr(line, c, ft_strlen(line)) != 0)
		{
			path_file = ft_strtrim(list_line[1], "\n");
			f = open(path_file, O_RDWR);
			if (f != -1)
				close(f);
			ft_free_one_point(path_file);
		}
		ft_free_one_point(line);
		ft_free_two_point(list_line);
	}
	if(f != -1)
		return(SUCCESS);
	else
		return(FAILURE);
}
