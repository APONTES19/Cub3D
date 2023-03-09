/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:21:42 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/08 21:42:18 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static char  *ft_get_path(char *line);
static void ft_get_rgb(char *line,  int *r, int *g, int *b);
static void ft_get_play(t_cub *cub);
static void ft_get_play_ang(char c, t_cub *cub);
static void ft_rgb_to_hex(t_cub *cub);

void ft_get_value (char **text, t_cub *cub)
{
	int i;

	i  = -1;
	while(text[++i])
	{
		if(ft_line_code(text[i]) == NO)
			cub->data.no_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == SO)
			cub->data.so_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == WE)
			cub->data.we_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == EA)
			cub->data.ea_path=ft_get_path(text[i]);
		if(ft_line_code(text[i]) == F)
			ft_get_rgb(text[i], &cub->data.fr, &cub->data.fg, &cub->data.fb);
		if(ft_line_code(text[i]) == C)
			ft_get_rgb(text[i], &cub->data.cr, &cub->data.cg, &cub->data.cb);
	}
	ft_rgb_to_hex(cub);
	cub->data.map = ft_get_map(text);
	ft_get_play(cub);
	printf("Posição x => %d\n", cub->play.x);
	printf("Posição y => %d\n", cub->play.y);
	printf("Posição ang => %f\n", cub->play.ang);
	printf("path %s", cub->data.no_path);
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

static void ft_get_play(t_cub *cub)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(cub->data.map[i])
	{
		j = 0;
		while(cub->data.map[i][j])
		{
			if (ft_strchr("NSEW", cub->data.map[i][j]))
			{
				cub->play.x = j;
				cub->play.y = i;
				ft_get_play_ang(cub->data.map[i][j], cub);
				cub->data.map[i][j] = '0';
			}
			// printf("%c",cub->data.map[i][j]);
			j++;
		}
		i++;
	}
}

static void ft_get_play_ang(char c, t_cub *cub)
{
		if (c == 'N')
			cub->play.ang = 0;
		else if (c == 'S')
			cub->play.ang = PI / 2;
		else if (c == 'E')
			cub->play.ang = (PI * 3) / 2;
		else if (c == 'W')
			cub->play.ang = PI;
}

static void ft_rgb_to_hex(t_cub *cub)
{
    cub->data.c_floor = (cub->data.fr << 16 | cub->data.fg << 8 | cub->data.fb);
	cub->data.c_ceiling = (cub->data.cr << 16 | cub->data.cg << 8 | cub->data.cb);
	printf("color floor => %d\n",  cub->data.c_floor);
	printf("color ceiling => %d\n",  cub->data.c_ceiling);
}


