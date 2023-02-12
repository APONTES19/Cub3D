/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_code.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 03:01:35 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/11 04:16:11 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

int ft_flag_code(char *flag)
{
    if(flag[0] == '1')
        return(WALL)
    if(flag[0] == '\0')
		return(END);
    if(flag[0] == '\n')
        return (NEW_LINE);
	if (ft_strnstr(flag,"C" ,ft_strlen(flag)) == 0)
		return (C);
	if (ft_strnstr(flag,"F" ,ft_strlen(flag)) == 0)
		return (F);
	if (ft_strnstr(flag,"NO" ,ft_strlen(flag)) == 0)
		return (NO);
	if (ft_strnstr(flag, "SO",ft_strlen(flag)) == 0)
		return (SO);
	if (ft_strnstr(flag, "WE" , ft_strlen(flag)) == 0)
		return (WE);
	if (ft_strnstr(flag, "EA" , ft_strlen(flag)) == 0)
		return (EA);
	return (FAILURE);
}