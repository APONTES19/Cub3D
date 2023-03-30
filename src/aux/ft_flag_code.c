/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_code.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 03:01:35 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 04:05:48 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_flag_code(char *flag)
{
	if (flag[0] == '1')
		return (WALL);
	if (flag[0] == '\0')
		return (END);
	if (flag[0] == '\n')
		return (NEW_LINE);
	if (ft_strncmp(flag, "C", ft_strlen(flag)) == 0)
		return (C);
	if (ft_strncmp(flag, "F", ft_strlen(flag)) == 0)
		return (F);
	if (ft_strncmp(flag, "NO", ft_strlen(flag)) == 0)
		return (NO);
	if (ft_strncmp(flag, "SO", ft_strlen(flag)) == 0)
		return (SO);
	if (ft_strncmp(flag, "WE", ft_strlen(flag)) == 0)
		return (WE);
	if (ft_strncmp(flag, "EA", ft_strlen(flag)) == 0)
		return (EA);
	return (FAILURE);
}
