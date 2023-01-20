/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:46:25 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/20 13:09:45 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int	ft_check_extension(char	**argv)
{
	if (argv[1][ft_strlen(argv[1]) - 1] == 'b')
		return(0);
	return(1);
}
