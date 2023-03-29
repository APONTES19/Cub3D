/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutcs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:02:36 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/29 13:07:33 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUTCS_H
# define STRUTCS_H

typedef struct	img t_img;

typedef struct  check_path_img
{
	char	*line;
	char	**list_line;
	char	*path_file;
	int		file;

} t_check_path_img;


typedef struct  check_duplicated_flag
{
	int		status;
	int		i;
	int		no;
	int		so;
	int		we;
	int		ea;
	int		f;
	int		c;

} t_check_duplicated_flag;

typedef struct window
{
	void	*win;
	void	*mlx;
	int		size_x;
	int		size_y;
	char	*title;
	t_img *image;
}	t_win;

typedef struct data
{
	char	**map;
	char	*no_path;
	char	*so_path;
	char	*we_path;
	char	*ea_path;
	int		c_floor;
	int		c_ceiling;

	int		fr;
	int		fg;
	int		fb;
	int		cr;
	int		cg;
	int		cb;
}	t_data;

typedef struct player
{
	double	x;
	double	y;
	double	ang;
	double	dx;
	double	dy;
	double	xo;
	double	yo;
	double   ray_ang;

	double	dist;
	int		status;
	int		move;

	int	turn;
 int	ray;
} t_play;

typedef struct    img {
    void    *img;
    char    *addr;
    int        bits_per_pixel;
    int        line_length;
    int        endian;
}                t_img;




typedef struct cub
{
	t_play	play;
	t_data	data;
	t_win	w;
	t_img	img;
}	t_cub;

#endif
