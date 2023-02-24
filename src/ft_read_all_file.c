/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_all_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:26:21 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/15 12:18:16 by lucasmar         ###   ########.fr       */
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
	if (fd < 1)
		return (NULL);
	text = ft_calloc(sizeof(char *), size + 1);
	if (!text)
		return (NULL);
	i = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		text[i++] = ft_strdup(line);
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
		if (line == NULL)
			break ;
		ft_free_one_point(line);
	}
	ft_free_one_point(line);
	close (fd);
	return (i);
}
