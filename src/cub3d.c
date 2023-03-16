/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:49:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/03/15 20:54:33 by lucasmar         ###   ########.fr       */
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

    // ft_ray_casting(&cub);

	ft_free_two_point (text);

	printf("%f", ft_distance(4,2,0,0));
	ft_init_window(&cub);
	return (0);
}
