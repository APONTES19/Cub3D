/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicated_flag.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:14:45 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/10 23:19:31 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

// serve para verificar se não existe flag duplicado ou faltando 

static void ft_init_check_duplicated_flag(t_check_amount_flag *data);
static int ft_check_count_flag(t_check_amount_flag *data);
static void ft_count_flag(t_check_amount_flag *data);


int ft_check_duplicated_flag(char **text)
{
	t_check_amount_flag *data;
	int	result;
	
	data = malloc(sizeof(t_check_amount));
	if(!data)
		return (FAILURE);
	ft_init_check_amount_flag(&data);
	while(text[++data->i])
	{
		data->split = ft_split(text[data->i], ' ');
		ft_count_flag(&data);
		ft_free_two_point(data->split);
	}
	result =ft_check_count_flag(&data)
	free(data);
	return(result);
}


static void ft_init_check_duplicated_flag(t_check_amount_flag *data)
{

	data->no = 0;
	data->so = 0;
	data->we = 0;
	data->ea = 0;
	data->f = 0;
	data->c = 0;
	data->i = -1;
}

static void ft_count_flag(t_check_amount_flag *data)
{
	if(ft_strncmp(data->split[0],"NO", 2) == 0)
		data->no++;
	if(ft_strncmp(data->split[0],"SO", 2) == 0)
		data->so++;
	if(ft_strncmp(data->split[0],"WE", 2) == 0)
		data->we++;
	if(ft_strncmp(data->split[0],"EA", 2) == 0)
		data->ea++;
	if(ft_strncmp(data->split[0],"F", 1) == 0)
		data->f++;
	if(ft_strncmp(data->split[0],"C", 1) == 0)
		data->c++;
}

static int ft_check_count_flag(t_check_amount_flag *data)
{
	if(data->no != 1 )
		return (ft_error_message(ERROR_COUNT_FLAG, "NO"));
	if(data->so != 1)
		return (ft_error_message(ERROR_COUNT_FLAG, "SO"));
	if(data->we != 1)
		return (ft_error_message(ERROR_COUNT_FLAG, "WE"));
	if(data->ea != 1)
		return (ft_error_message(ERROR_COUNT_FLAG, "EA"));
	if(data->f != 1)
		return (ft_error_message(ERROR_COUNT_FLAG, "F"));
	if(data->c != 1)
		return (ft_error_message(ERROR_COUNT_FLAG, "C"));
	return(SUCCESS);
}
