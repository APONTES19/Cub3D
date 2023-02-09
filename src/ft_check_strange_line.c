/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_strange_line.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:06:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/09 06:04:26 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

/*
 Objetivo de verifar ser tem a primeira palavra da linha algum elemento diferente 
  -espaço
  -\n 
  - ponto cadiais 
  - chao e o seu
*/

int check_isflag (char *flag);

int ft_check_strange_line(char **text)
{
    char **split;
    int i;
    int j;

    i = 0;
    j = 0;
    while(text[i])
    {
        split = ft_split(text[i], ' ');
		if(check_isflag (split[0]) == SUCCESS)
			j++;
		ft_free_two_point(split);
        i++;
        printf("\nsplit %d=%d ", i, j);
    }
    if (i == j)
    {
        return (SUCCESS);
    }
        
	return (FAILURE);
}

int check_isflag (char *flag)
{

	if(flag[0] == '1' || flag[0] == '\0')
		return(SUCCESS);
    if(ft_strlen(flag) == 1)
    {
        if(flag[0] == '\n')
            return (SUCCESS);
        if(flag[0] == 'F' || flag[0] == 'C')
            return (SUCCESS);
    }
    if(ft_strlen(flag) == 2)
    {
		if (ft_strnstr(flag,"NO" ,2) == 0)
			return (SUCCESS);
		if (ft_strnstr(flag,"SO" ,2) == 0)
			return (SUCCESS);
		if (ft_strnstr(flag,"WE" ,2) == 0)
			return (SUCCESS);
		if (ft_strnstr(flag,"EA" ,2) == 0)
			return (SUCCESS);
    }
	return (FAILURE);
}