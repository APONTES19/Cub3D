/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_cub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:57:02 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/21 21:11:20 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void ft_free_cub(t_cub *data)
{
    ft_free_one_point(data->no_path);
    ft_free_one_point(data->so_path);
    ft_free_one_point(data->we_path);
    ft_free_one_point(data->ea_path);

    ft_free_two_point(data->map);

    free(data);
}


