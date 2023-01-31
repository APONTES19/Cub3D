/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_two_point.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:08:07 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/27 23:11:41 by lucasmar         ###   ########.fr       */
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
