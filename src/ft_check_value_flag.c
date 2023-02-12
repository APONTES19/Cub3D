/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_value_flag.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:55:59 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/11 02:56:50 by ryoshio-         ###   ########.fr       */
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
