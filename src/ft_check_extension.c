/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:45:25 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/01/27 15:50:53 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_check_extension(const char	*str, const char *extension)
{
	if (ft_strlen(str) <= ft_strlen(extension))
		return (FAILURE);
	if (ft_strncmp(extension, str + ft_strlen(str) - ft_strlen(extension),
			ft_strlen(extension) + 1) != 0)
		return (FAILURE);
	return (SUCCESS);
}
