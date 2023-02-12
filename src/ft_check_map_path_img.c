/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_path_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:18:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/11 02:38:26 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_value_flag(char  **text)
{
	int i;
	int status;

	i = -1;
	while (text[++i])
	{
		status = ft_isflag(text[i]);
		if(status == 1)
		{
			if(ft_check_rgb(text[i]) != SUCCESS)
				return(FAILURE);	
		}
		if(status == 2)
		{
			if(ft_check_texure(text[i]) != SUCCESS)
				return(FAILURE);	
		}
		if (status == 3)
			break;
	}
	return(SUCCESS);
}


int ft_flag_code(char *s)
{
	char *trim;
	int status;
	
	status = 0;
	trim = ft_strtrim(s, " ");
	
	if (trim[0] == 'F' ||  trim[0] == 'C')
		status = 1;
	if (trim[0] == 'N' ||  trim[0] == 'S')
		status = 2
	if (trim[0] == 'W' ||  trim[0] == 'E')
		status = 2
	if(trim[0] == '1')
		status = 3;
	free(trim);
	return (status);
}