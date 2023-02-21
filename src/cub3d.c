/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:49:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/21 05:42:01 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int argc, char **argv)
{
	char	**text;
	
	ft_check_arguments(argc, argv);
	text = ft_read_all_file(argv[1]);
	if(!text)
		return(ft_error_message(ERROR_READ,argv[1]));
	ft_check_cub_file(text);

	
	printf("%s",text[0]);

// ft_get_value ->  que pega os valores

// ft_game -> que inicializa o game
	
	
	ft_free_two_point (text);
	return (0);
}
