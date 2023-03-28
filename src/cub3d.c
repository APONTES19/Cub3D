/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:49:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/27 20:56:40 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int argc, char **argv)
{
	t_cub	cub;

	ft_memset(&cub, 0, sizeof(t_cub));
	ft_check_arguments(argc, argv);
	if(ft_read_all_file(argv[1], &cub) == 1)
	{
		ft_free_two_point (cub.data.text);
		return(ft_error_message(ERROR_READ,argv[1]));
	}
	ft_check_cub_file(&cub);
	cub.play.x = 0;
	ft_get_value (cub.data.text, &cub);
	printf("%f", cub.play.x);
	ft_init_window(&cub);
	return (0);
}
