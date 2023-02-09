/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_all_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:26:21 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/09 03:52:17 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static int	ft_file_line_count(const char *path);

char	**ft_read_all_file(const char *path)
{
	int		size;
	int		i;
	int		fd;
	char	*line;
	char	**text;

	size = ft_file_line_count(path);
	fd = open (path, O_RDWR);
	if (fd < 0)
		return (NULL);
	text = ft_calloc(sizeof(char *), size + 1);
	if (!text)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		line = get_next_line (fd);
		text[i] = ft_strdup(line);
		ft_free_one_point(line);
	}
	close(fd);
	return (text);
}

static int	ft_file_line_count(const char *path)
{
	int		i;
	int		fd;
	char	*line;

	fd = open (path, O_RDWR);
	if (fd < 0)
		return (0);
	i = -1;
	while (++i > -1)
	{
		line = get_next_line (fd);
		if (!line)
			break ;
		ft_free_one_point(line);
	}
	ft_free_one_point(line);
	close (fd);
	return (i);
}
