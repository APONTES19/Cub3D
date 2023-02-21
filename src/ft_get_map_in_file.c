/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_in_file.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:26:21 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/21 16:24:30 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static	char	**ft_copy_map(char ** text, int init);

char	**ft_get_map_in_file(char **text)
{
	int	i;
	int	j;
	char **map;

	i = 0;
	map = NULL;
	while(text[i])
	{
		if(text[i][0] == ' ')
		{
			j = 0;
			while(text[i][j] == ' ')
				j++;
			if(text[i][j] == '1')
			{
				map = ft_copy_map(text, (i - 1));
				break;
			}
		}
		i++;
	}
	return(map);
}

static	char	**ft_copy_map(char **text, int init)
{
	char	**result;
	int		size;
	int	i;
	int	j;

	j = init;
	size = 0;
	while(text[init])
	{
		size++;
		init++;
	}
	result = ft_calloc((size + 1), sizeof(char *));
	if (!result)
		return(NULL);
	i = 0;
	while(text[j])
	{
		result[i] = ft_strdup(text[j]);
		i++;
		j++;
	}
	result[i] = '\0';
	return(result);
}
