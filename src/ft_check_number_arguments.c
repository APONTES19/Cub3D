/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number_arguments.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:46:25 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/25 17:25:52 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int	ft_check_number_arguments(char **argv)
{
	int	i;

	i = 0;
	while(argv[i])
	{
		i++;
	}
	if(i == 2)
		return(0);
	else
		return(1);
}

