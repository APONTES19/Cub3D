/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutcs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:02:36 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/26 12:48:29 by lucasmar         ###   ########.fr       */
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
	// int		size_x;
	// int		size_y;
	// char	*title;
}	t_win;

typedef struct texture
{
	void		*img;
	int			size_line;
	int			bpp;
	int			x;
	int			y;
	char		*data;
	uint32_t	*buffer;
} t_txr;

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
	char	**text;
}	t_data;


typedef struct player
{
	float	x;
	float	y;
	float	ang;
	float 	wall_x;
	float	wall_y;
	float	dx;
	float	dy;
	float	xo;
	float	yo;
	float   ray_ang;

	// int		rot_speed;
	// int		mov_speed;

	float	dist;
	int		status;
	// int	move_up;
	// int	move_down;
	// int	move_left;
	// int	move_right;
	// int	turn_left;
	// int	turn_right;
 int	ray;
} t_play;

typedef	struct	img {
	void	*img;
    char	*addr;
    int	bits_per_pixel;
    int	line_length;
    int	endian;
}	img;


typedef struct	calc{
	float	wall_dist;
}	t_calc;


typedef struct cub
{
	t_play	play;
	t_data	data;
	t_win	w;
	t_img	img;
	t_calc	calc;
	t_txr	list_texture[NUM_TEXTURE];
}	t_cub;

#endif
