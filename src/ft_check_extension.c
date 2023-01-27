/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:46:25 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/25 18:10:56 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int	ft_check_extension(char	**argv)
{
	int	result;

	result = 0;
	if (ft_strlen(argv[1]) <= 4)
		result = 1;
	else if (ft_strncmp(argv[1] + ft_strlen(argv[1]) - 4, ".cub",4))
		result = 1;
	if (result == 1)
		ft_error("Error arguments invalid!", 1);
	return(result);
}

