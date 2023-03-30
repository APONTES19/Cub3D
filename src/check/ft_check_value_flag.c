/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_value_flag.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:55:59 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 04:46:15 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

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
	return (SUCCESS);
}
