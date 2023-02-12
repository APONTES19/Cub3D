/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:47:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/10 20:47:05 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static int	ft_check_amount_argument(int argc);

int	ft_check_arguments(int argc, char **argv)
{
	if (ft_check_amount_argument(argc) == FAILURE)
		exit (ft_error_message(ERROR_MSG, "Argument amount error!"));
	if (ft_check_extension(argv[1], ".cub") == FAILURE)
		exit (ft_error_message(ERROR_EXTENSION, argv[1]));
	if (ft_check_file_exists(argv[1]) == FAILURE)
		exit (ft_error_message(ERROR_FOUND, argv[1]));
	return (SUCCESS);
}

static int	ft_check_amount_argument(int argc)
{
	if (argc != 2)
		return (FAILURE);
	return (SUCCESS);
}
