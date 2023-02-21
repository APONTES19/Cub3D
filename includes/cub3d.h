/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/20 23:54:44 by ryoshio-         ###   ########.fr       */
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


// em teste
char    **ft_read_all_file(const char *path);
int ft_flag_code(char *flag);
int ft_line_code(char *line);
int ft_check_first_word_each_line(char **text);
int ft_check_duplicated_flag(char **text);
int ft_check_line_position(char **text);
int	ft_check_rgb(char *line);
int	ft_check_texure(char  *line);
void ft_check_cub_file(char **text);
int	ft_check_value_flag(char  **text);
char  **ft_get_map(char **text);

// simples demais para ter teste
int		ft_error_message(int code, const char *str);
void	ft_free_one_point(char *point);
void	ft_free_two_point(char **point);
void    ft_exit_two_point(char **point);
#endif
