/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_path_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:18:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/06 13:35:26 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_map_path_img(int fd, char *c)
{
	t_check_path_img  data;

	data.file = FAILURE;
	while (1)
	{
		data.line = get_next_line(fd);
		if (data.line == NULL)
			break;
		data.list_line = ft_split(data.line,' ');
		if (ft_strnstr(data.line, c, ft_strlen(data.line)) != 0)
		{
			data.path_file = ft_strtrim(data.list_line[1], " \n");
			if (data.list_line[2] == NULL || data.list_line[2][0] == '\n' )
				data.file = ft_check_file_exists(data.path_file);
			printf("buc/nta");
			ft_free_one_point(data.path_file);
		}
		ft_free_one_point(data.line);
		ft_free_two_point(data.list_line);
	}
	if(data.file == SUCCESS)
		return(SUCCESS);
	return(FAILURE);
}
