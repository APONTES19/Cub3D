/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:49:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/27 02:12:06 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int	main(int argc, char **argv)
{
	ft_check_arguments(argc, argv);

	printf("%dTudo certo %s", argc, argv[0]);
	return(0);
}

