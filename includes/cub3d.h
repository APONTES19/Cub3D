/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/21 23:50:55 by lucasmar         ###   ########.fr       */
=======
/*   Updated: 2023/02/21 21:12:56 by ryoshio-         ###   ########.fr       */
>>>>>>> f25560f173b06a070674008192ffccd3dd096a2f
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
char    **ft_read_all_file(const char *path);
int		ft_flag_code(char *flag);
int		ft_line_code(char *line);
int		ft_check_first_word_each_line(char **text);
int		ft_check_duplicated_flag(char **text);
int		ft_check_line_position(char **text);
int		ft_check_rgb(char *line);
int		ft_check_texure(char  *line);


// em teste
void ft_check_cub_file(char **text);
int	ft_check_value_flag(char  **text);
char  **ft_get_map(char **text);
int ft_check_map(char **text);
int	ft_check_wall(char **map);
void ft_get_value (char **text, t_cub *data);

// simples demais para ter teste
int		ft_error_message(int code, const char *str);
void	ft_free_one_point(char *point);
void	ft_free_two_point(char **point);
void    ft_exit_two_point(char **point);
<<<<<<< HEAD






















//lucas altera????es
void	ft_creat_window(int x, int y, char *title);

=======
void    ft_free_cub(t_cub *data);
>>>>>>> f25560f173b06a070674008192ffccd3dd096a2f
#endif
