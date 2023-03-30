/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_first_word_each_line.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:06:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 04:30:16 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_first_word_each_line(char **text)
{
	int	i;

	i = 0;
	while (text[i])
	{
		if (ft_line_code(text[i]) == FAILURE)
		{
			ft_error_message(ERROR_LINE, text[i]);
			return (FAILURE);
		}
		i++;
	}
	return (SUCCESS);
}
