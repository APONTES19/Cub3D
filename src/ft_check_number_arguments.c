/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number_arguments.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:46:25 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/21 19:51:35 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static int ft_error_number_arguments(void);

int	ft_check_number_arguments(char **argv)
{
	int	i;

	i = 0;
	while(argv[i])
		i++;
	if(i == 2)
		return(0);
	else
		return(ft_error_number_arguments( ));
}

int ft_error_number_arguments(void)
{
	printf("The amount of argument is wrong!\n");
	return(1);
}