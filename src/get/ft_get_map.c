/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:45:20 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 21:56:08 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static int	ft_map_max_column(char **text);
static int	ft_map_count_line(char **text);

char	**ft_get_map(char **text)
{
	char	**map;
	int		i;
	int		j;

	map = ft_calloc (ft_map_count_line (text) + 1, sizeof(char *));
	i = -1;
	j = 0;
	while (text[++i])
	{
		if (ft_line_code(text[i]) == WALL)
		{
			map[j] = ft_calloc(ft_map_max_column(text) + 1, sizeof(char *));
			ft_strlcpy (map[j], text[i], ft_strlen(text[i]) + 1);
			j ++;
		}
	}
	return (map);
}

static int	ft_map_count_line(char **text)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (text[i])
	{
		if (ft_line_code(text[i]) == WALL)
			size ++;
		i ++;
	}
	return (size);
}

static int	ft_map_max_column(char **text)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (text[i])
	{
		if (ft_line_code(text[i]) == WALL)
		{
			if (size < (int)ft_strlen(text[i]))
				size = ft_strlen(text[i]);
		}
		i ++;
	}
	return (size);
}
