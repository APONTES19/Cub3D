/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/09 05:45:51 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "./define.h"
# include "./libs.h"
# include "./strutcs.h"

//funcoes testado manualmente 

int		ft_check_arguments(int argc, char **argv);

// Consolidado 
int		ft_check_extension(const char	*file, const char *extension);
int		ft_check_file_exists(const char *path);


// em teste
char **ft_read_all_file(const char *path);
int ft_check_strange_line(char **text);

//em producao 
int		ft_check_map_flag_one(int fd, char c);
int		ft_check_map_path_img(int fd, char *c);
int	ft_check_map_flag(int fd, char *c);
int     ft_check_misconfiguration(const char *str);
int     ft_check_map_rgb(int fd, char c);


// simples demais para ter teste
int		ft_error_message(int code, const char *str);
void	ft_free_one_point(char *point);
void	ft_free_two_point(char **point);

#endif
