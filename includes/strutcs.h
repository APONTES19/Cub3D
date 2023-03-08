/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutcs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:02:36 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/07 22:26:28 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUTCS_H
# define STRUTCS_H

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
	void	*scr;
	void	*mlx;
	int		size_x;
	int		size_y;
	char	*title;
}	t_win;

typedef struct data
{
	char	**map;
	char	*no_path;
	char	*so_path;
	char	*we_path;
	char	*ea_path;

	int		fr;
	int		fg;
	int		fb;
	int		cr;
	int		cg;
	int		cb;
}	t_data;

typedef struct player
{
	int	x;
	int	y;
	float	ang;
	// int	move_up;
	// int	move_down;
	// int	move_left;
	// int	move_right;
	// int	turn_left;
	// int	turn_right;
	// int	ray_num;
} t_play;

typedef struct    line {
    void    *img;
    char    *addr;
    int        bits_per_pixel;
    int        line_length;
    int        endian;
}                t_line;

typedef struct cub
{
	t_play	play;
	t_data	data;
	t_win	win;
	t_line	line;
}	t_cub;

#endif
