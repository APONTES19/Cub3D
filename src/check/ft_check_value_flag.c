/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_value_flag.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:55:59 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 21:14:15 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static int	ft_check_rgb_d(char **text);
static int	ft_check_rgb_c_f(char *ceiling, char *floor);

int	ft_check_value_flag(char **text)
{
	int	i;
	int	status;

	i = -1;
	while (text[++i])
	{
		status = ft_line_code(text[i]);
		if (status == F || status == C)
		{
			if (ft_check_rgb(text[i]) != SUCCESS)
				return (ft_error_message(ERROR_RGB, text[i]));
		}
		if (status == NO || status == SO || status == WE || status == EA)
		{
			if (ft_check_texture(text[i]) != SUCCESS)
				return (FAILURE);
		}
		if (status == WALL)
			break ;
	}
	if (ft_check_rgb_d(text) == 0)
		return (ft_error_message(ERROR_RGB_2, "\n"));
	return (SUCCESS);
}

static int	ft_check_rgb_d(char **text)
{
	int		i;
	char	*ceiling;
	char	*floor;

	i = 0;
	while (text[i])
	{
		if (text[i][0] == 'C')
			ceiling = ft_strdup(text[i]);
		else if (text[i][0] == 'F')
			floor = ft_strdup(text[i]);
		i++;
	}
	i = ft_check_rgb_c_f(ceiling, floor);
	ft_free_one_point(ceiling);
	ft_free_one_point(floor);
	return (i);
}

static int	ft_check_rgb_c_f(char *ceiling, char *floor)
{
	char	**temp_c;
	char	**temp_f;
	int		result;

	temp_c = ft_split(ceiling, ' ');
	temp_f = ft_split(floor, ' ');
	result = ft_strncmp(temp_c[1], temp_f[1], ft_strlen(temp_c[1]));
	ft_free_two_point(temp_c);
	ft_free_two_point(temp_f);
	return (result);
}
