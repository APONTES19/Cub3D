/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:18:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/12 05:03:34 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_texture(char  *line)
{
	char	*trim;
	char	**split;

	trim = ft_strtrim(line, " \n");
	split = ft_split(trim, ' ');
	if(split[1] == NULL || split[2] != NULL )
	{
		ft_free_one_point(trim);
		ft_free_two_point(split);
		return (ft_error_message(ERROR_LINE, line));
	}
	if( ft_check_file_exists(split[1]) != SUCCESS)
	{
		ft_error_message(ERROR_FOUND, split[1]);
		ft_free_one_point(trim);
		ft_free_two_point(split);
		return (FAILURE);
	}
	ft_free_one_point(trim);
	ft_free_two_point(split);
	return (SUCCESS);
}

