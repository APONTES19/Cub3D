/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:42:59 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/21 05:13:25 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

static int ft_check_map_horizontal(char **map, int i, int j);
static int ft_check_map_vertical(char **map, int i, int j);

int	ft_check_wall(char **map)
{
	int	i;
	int	j;

	i = -1;
	while(map[++i])
	{
		j = -1;
		while(map[i][++j])
		{
			if(ft_strchr("NSEW0",map[i][j]) != NULL) 
			{
				if(ft_check_map_horizontal(map, i, j) == FAILURE)
				{
					printf("%s\n", map[i]);
					printf("i=%d j=%d\n", i,j);
					
					return (FAILURE);
				}
					
				if(ft_check_map_vertical(map, i, j) == FAILURE)
					return (FAILURE);
			}
			
		}
	}
	return(SUCCESS);
}


static int ft_check_map_horizontal(char **map, int i, int j)
{
	if(j == 0 || j + 1== (int)ft_strlen(map[i])) // verifiando se for as pontas
		return(FAILURE);
	if(ft_strchr("NSEW10",map[i][j - 1]) == NULL) // verificando o lado esquerdo
		return(FAILURE);
	if(ft_strchr("NSEW10",map[i][j + 1]) == NULL) // verificando o lado direito
		return(FAILURE);
	return (SUCCESS);
}


static int ft_check_map_vertical(char **map, int i, int j)
{
	int line;

	line = 0;
	while(map[line])
		line ++;
	if(i == 0 || i == line - 1) // verifiando se for as pontas
		return(FAILURE);
	if(ft_strchr("NSEW10",map[i + 1][j]) == NULL) // verificando em cima
		return(FAILURE);
	if(ft_strchr("NSEW10",map[i -1][j]) == NULL) // verificando em baixo
		return(FAILURE);
	return (SUCCESS);
}