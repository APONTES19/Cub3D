/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_two_point.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:08:07 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/11 21:29:37 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

void	ft_free_two_point(char **point)
{
	int i;

	i = 0;
	while(point[i])
	{
		free(point[i]);
		i++;
	}
	free(point);
	point = NULL;
}
