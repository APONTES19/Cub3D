/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:46:25 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/21 19:51:08 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int	ft_check_extension(char	**argv)
{
	if (ft_strlen(argv[1]) < 4)
		return(0);
//	if (argv[1][ft_strlen(argv[1]) - 1] == 'b')
		
	return(1);
}
