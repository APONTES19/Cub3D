/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/07 16:10:15 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "./define.h"
# include "./libs.h"
# include "./strutcs.h"

//functions here!

int		ft_check_arguments(int argc, char **argv);

int		ft_check_extension(const char	*str, const char *extension);
int		ft_check_file_exists(const char *argv);
int		ft_check_map_flag_one(int fd, char c);
int		ft_check_map_path_img(int fd, char *c);
int     ft_check_map_rgb(int fd, char c);

int		ft_error_message(int code, const char *str);

void	ft_free_one_point(char *point);
void	ft_free_two_point(char **point);

#endif
