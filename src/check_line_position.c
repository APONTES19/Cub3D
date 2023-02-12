/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line_position.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:03:04 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/11 00:44:57 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int check_line_position(char **text)
{
	int	i;
	char *trim;
	int map;

	map = 0;
	i = -1;
	while(text[++i])
	{
		trim  = ft_strtrim(text[i]," ");
		if (trim[0] == '1' && map == 0)
			map = 1;
		if(map == 1 && trim[0] != '1' && trim[0] != '\n' && trim[0] != '\0')
		{
			ft_free_one_point(trim);
			return(ft_error_message(ERROR_LINE_WRONG_POSITION, text[i]));
		}	
		ft_free_one_point(trim);
	}
	return (SUCCESS);
}
