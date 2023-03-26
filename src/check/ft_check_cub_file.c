/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cub_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:13:20 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/25 16:05:39 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


void ft_check_cub_file(t_cub *cub)
{
	if (ft_check_first_word_each_line(cub->data.text) == FAILURE)
		ft_exit_two_point(cub->data.text);
	if (ft_check_duplicated_flag(cub->data.text) == FAILURE)
		ft_exit_two_point(cub->data.text);
	if (ft_check_line_position(cub->data.text) == FAILURE)
		ft_exit_two_point(cub->data.text);
	if (ft_check_value_flag(cub->data.text)== FAILURE)
		ft_exit_two_point(cub->data.text);
	if(ft_check_map(cub->data.text) == FAILURE)
		ft_exit_two_point(cub->data.text);
}


