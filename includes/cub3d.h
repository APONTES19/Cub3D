/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/26 14:11:00 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "./define.h"
# include "./libs.h"
# include "./strutcs.h"

// Consolidado
int		ft_check_arguments(int argc, char **argv);
int		ft_check_extension(const char	*file, const char *extension);
int		ft_check_file_exists(const char *path);
int		ft_read_all_file(const char *path, t_cub *cub);
int		ft_flag_code(char *flag);
int		ft_line_code(char *line);
int		ft_check_first_word_each_line(char **text);
int		ft_check_duplicated_flag(char **text);
int		ft_check_line_position(char **text);
int		ft_check_rgb(char *line);
int		ft_check_texture(char  *line);

void	ft_check_cub_file(t_cub *cub);
int		ft_check_value_flag(char  **text);
char	**ft_get_map(char **text);
int		ft_check_map(char **text);
int		ft_check_wall(char **map);
void	ft_get_value (char **text, t_cub *cub);

// em teste
float	ft_distance(float x1, float y1, float x2, float y2);
void	ft_distance_wall(t_cub *data);
int		ft_size_wall(t_cub *cub);
void	ft_ray_casting(t_cub *cub);
void	ft_mlx_pixel_put(t_img *data, int x, int y, int color);
float	ft_angle_correction(float angle);
void	ft_free_all_st(t_cub *cub);
void	ft_get_calc(t_cub *cub);
void	ft_get_texture(t_cub *cub);

// simples demais para ter teste
int		ft_error_message(int code, const char *str);
void	ft_free_one_point(char *point);
void	ft_free_two_point(char **point);
void    ft_exit_two_point(char **point);


int ft_to_hex(int red, int green, int blue);
void ft_print_gamer(t_cub *cub);


















//lucas alterações
void	ft_init_window(t_cub *cub);
int		ft_close_window(t_cub *cub);
int		ft_key(int key, t_cub *cub);
int		ft_render(t_cub *cub);
void	ft_background(t_cub *cub);

void    ft_free_cub(t_cub *data);
#endif
