/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_all_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:26:21 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/25 16:21:34 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static int	ft_file_line_count(const char *path);

int	ft_read_all_file(const char *path, t_cub *cub)
{
	int		size;
	int		i;
	int		fd;
	char	*line;

	size = ft_file_line_count(path);
	fd = open (path, O_RDWR);
	if (fd < 1)
		return (1);
	cub->data.text = ft_calloc(sizeof(char *), size + 1);
	if (!cub->data.text)
		return (1);
	i = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		cub->data.text[i++] = ft_strdup(line);
		ft_free_one_point(line);
	}
	close(fd);
	return (0);
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
