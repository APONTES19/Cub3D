/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rgb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:53:45 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/12 04:03:12 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static	int	ft_check_rgb_value(const char *str);
static	int	ft_rgb_range(const char *str);
static	int	ft_str_is_nbr(const char *str);

int	ft_check_rgb(char *line)
{
	char	*trim;
	int		status;

	status = FAILURE;
	trim = ft_strtrim(line, "\n ");
	status = ft_check_rgb_value(trim + 1);
	ft_free_one_point(trim);
	return (status);
}

static int	ft_check_rgb_value(const char *str)
{
	char	**split;
	int		i;
	int		status;

	split = ft_split(str, ',');
	i = 0;
	status = SUCCESS;
	while (split[i])
	{
		if (ft_str_is_nbr(split[i]) == FAILURE)
			status = FAILURE;
		if (ft_rgb_range(split[i]) == FAILURE)
			status = FAILURE;
		i ++;
	}
	ft_free_two_point(split);
	if (i != 3 || str[ft_strlen(str) - 1] == ',' )
		return (FAILURE);
	return (status);
}

static int	ft_str_is_nbr(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (FAILURE);
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (FAILURE);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (FAILURE);
		i ++;
	}
	return (SUCCESS);
}

static int	ft_rgb_range(const char *str)
{
	int	nbr;

	nbr = ft_atoi(str);
	if (nbr > -1 && nbr < 256)
		return (SUCCESS);
	return (FAILURE);
}
