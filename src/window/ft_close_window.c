/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:07:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/18 11:52:51 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int	ft_close_window(t_cub *cub)
{
	mlx_clear_window(cub->w.mlx, cub->w.win);
	mlx_loop_end(cub->w.mlx);
	mlx_destroy_window(cub->w.mlx, cub->w.win);
	mlx_destroy_display(cub->w.mlx);
	free(cub->w.mlx);
	ft_free_all_st(cub);
	//chamar função que da free na estrutura inteira
	exit(3);
	return (0);
}

void ft_free_all_st(t_cub *cub)
{
	ft_free_one_point(cub->data.no_path);
	ft_free_one_point(cub->data.so_path);
	ft_free_one_point(cub->data.we_path);
	ft_free_one_point(cub->data.ea_path);
	ft_free_two_point(cub->data.map);

}
