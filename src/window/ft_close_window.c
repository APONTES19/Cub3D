/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:07:06 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/30 22:23:59 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	ft_free_images(t_cub *cub);

int	ft_close_window(t_cub *cub)
{
	if (cub->w.mlx)
	{
		ft_free_images (cub);
		mlx_clear_window (cub->w.mlx, cub->w.win);
		mlx_loop_end (cub->w.mlx);
		mlx_destroy_window (cub->w.mlx, cub->w.win);
		mlx_destroy_display (cub->w.mlx);
	}
	ft_free_all_st (cub);
	exit (3);
	return (0);
}

void	ft_free_all_st(t_cub *cub)
{
	ft_free_one_point (cub->data.no_path);
	ft_free_one_point (cub->data.so_path);
	ft_free_one_point (cub->data.we_path);
	ft_free_one_point (cub->data.ea_path);
	ft_free_two_point (cub->data.map);
}

void	ft_free_images(t_cub *cub)
{
	if (cub->w.no)
	{
		mlx_destroy_image (cub->w.mlx, cub->w.no->img);
		free (cub->w.no);
	}
	if (cub->w.so)
	{
		mlx_destroy_image (cub->w.mlx, cub->w.so->img);
		free (cub->w.so);
	}
	if (cub->w.we)
	{
		mlx_destroy_image (cub->w.mlx, cub->w.we->img);
		free (cub->w.we);
	}
	if (cub->w.ea)
	{
		mlx_destroy_image (cub->w.mlx, cub->w.ea->img);
		free (cub->w.ea);
	}
}
