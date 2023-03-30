/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_code.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 03:14:44 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 04:13:36 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_line_code(char *line)
{
	char	**split;
	int		status;

	split = ft_split(line, ' ');
	status = ft_flag_code(split[0]);
	ft_free_two_point(split);
	return (status);
}
