/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:38:50 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 04:39:03 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_player(char **map);
int	ft_check_strange_char(char **map);

int	ft_check_map(char **text)
{
	char	**map;

	map = ft_get_map(text);
	if (!map)
		return (ft_error_message(ERROR_MALLOC, "map"));
	if (ft_check_strange_char(map) == FAILURE)
	{
		ft_free_two_point(map);
		return (FAILURE);
	}
	if (ft_check_player(map) == FAILURE)
	{
		ft_free_two_point(map);
		return (FAILURE);
	}
	if (ft_check_wall(map) == FAILURE)
	{
		ft_free_two_point(map);
		return (ft_error_message(ERROR_MSG,
				"The map must be closed/surrounded by walls"));
	}
	ft_free_two_point(map);
	return (SUCCESS);
}

int	ft_check_player(char **map)
{
	int	nbr;
	int	j;
	int	i;

	i = -1;
	nbr = 0;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (ft_strchr("NSEW", map[i][j]))
				nbr ++;
		}
	}
	if (nbr == 1)
		return (SUCCESS);
	return (ft_error_message(ERROR_MSG, "Number of players is wrong!"));
}

int	ft_check_strange_char(char **map)
{
	int	j;
	int	i;

	i = -1;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (ft_strchr("NSEW 10\n", map[i][j]) == NULL)
				return (ft_error_message(ERROR_LINE, map[i]));
		}
	}
	return (SUCCESS);
}
