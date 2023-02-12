/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/11 22:38:05 by ryoshio-         ###   ########.fr       */
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

// em teste

int ft_flag_code(char *flag);
int ft_line_code(char *line);

int ft_check_first_word_each_line(char **text);



// simples demais para ter teste
int		ft_error_message(int code, const char *str);
void	ft_free_one_point(char *point);
void	ft_free_two_point(char **point);

#endif
