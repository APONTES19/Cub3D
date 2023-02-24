/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:21:42 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/21 21:15:51 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static char  *ft_get_path(char *line);
static void ft_get_rgb(char *line,  int *r, int *g, int *b);

void ft_get_value (char **text, t_cub *data)
{
	int i;
	
	i  = -1;
	while(text[++i])
	{
		
		if(ft_line_code(text[i]) == NO)
			data->no_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == SO)
			data->so_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == WE)
			data->we_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == EA)
			data->ea_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == F)
			ft_get_rgb(text[i], &data->fr, &data->fg, &data->fb);
		if(ft_line_code(text[i]) == C)
			ft_get_rgb(text[i], &data->cr, &data->cg, &data->cb);
	}
	data->map = ft_get_map(text);
}



static char *ft_get_path(char *line)
{
	char **split;
	char	*path;
	char	*tmp;
	
	split = ft_split(line, ' ');
	tmp = ft_strtrim(split[1]," \n");
	path =  ft_strdup(tmp);
	
	ft_free_two_point(split);
	ft_free_one_point(tmp);
	return(path);
}


static void ft_get_rgb(char *line,  int *r, int *g, int *b)
{
	char	*tmp;
	char	**split;
	char	*clear;

	clear = ft_strtrim(line, " \n");
	tmp =  ft_strchr(clear, ' ');
	split = ft_split(tmp, ',');


	
	*r = ft_atoi(split[0]);
	*g = ft_atoi(split[1]);
	*b = ft_atoi(split[2]);

	ft_free_two_point(split);
	ft_free_one_point(clear);
}
