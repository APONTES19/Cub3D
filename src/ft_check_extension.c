/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:46:25 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/24 03:55:59 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static int ft_error_extension(void);

int	ft_check_extension(char	**argv)
{
	if (ft_strlen(argv[1]) < 4)
		return(ft_error_extension());

	if (ft_strncmp(".cub", argv[1] + ft_strlen(argv[1])- 4, 5))
		return (ft_error_extension());
	return(0);
}

static int ft_error_extension(void)
{
	//perror("STRING:Error: Invalid extension");
	//printf("ERROR_EXTENSION_INVALID");
	//perror("");
	return (1);
}