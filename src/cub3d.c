/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:49:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/27 22:07:17 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int argc, char **argv)
{
	t_cub	cub;

	char	**text;
	ft_memset(&cub, 0, sizeof(t_cub));
	ft_check_arguments(argc, argv);
	text = ft_read_all_file(argv[1]);
	if(!text)
		return(ft_error_message(ERROR_READ,argv[1]));
	ft_check_cub_file(text);
	ft_get_value (text, &cub);
	
	
	ft_init_window(&cub);
	ft_raycast(&cub);
	ft_hook_window(&cub);
	ft_free_two_point (text);
	return (0);
}
