/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cub_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:13:20 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/11 21:18:46 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


void ft_check_cub_file(char *path)
{
	char	**text;

	text = ft_read_all_file(path);
	if(!text)
		exit(ft_error_mensagem(ERROR_READ, path));


/*
	if (ft_check_first_word_each_line(text) == FAILURE)
		exit(ft_free_two_point(text));
	if (ft_check_duplicated_flag(text) == FAILURE)
		exit(ft_free_two_point(text));
	if (ft_check_duplicated_flag(text) == FAILURE)
		exit(ft_free_two_point(text));
	if check_line_position(text == FAILURE)
		exit(ft_free_two_point(text));


*/		


    
    //mapa
}
