/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file_exists.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:28:18 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/11 21:53:38 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_file_exists(const char *path)
{
	int	fd;

	fd = open (path, O_RDWR);
	if (fd < 1)
		return (FAILURE);
	close (fd);
	return (SUCCESS);
}
