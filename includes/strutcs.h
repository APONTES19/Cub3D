/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutcs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:02:36 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/21 20:28:37 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUTCS_H
# define STRUTCS_H

typedef struct cub
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
}	t_cub;


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



#endif
