/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cub_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:13:20 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/12 04:36:23 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


void ft_check_cub_file(char **text)
{
	if (ft_check_first_word_each_line(text) == FAILURE)
		ft_exit_two_point(text);
	if (ft_check_duplicated_flag(text) == FAILURE)
		ft_exit_two_point(text);
	if (ft_check_line_position(text) == FAILURE)
		ft_exit_two_point(text);
	if (ft_check_value_flag(text)== FAILURE)
		ft_exit_two_point(text);

    //mapa
}


