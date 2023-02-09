/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:28:16 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/01 04:32:18 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_error_message(int code, const char *str)
{
	printf("Error\n"); //parece que tem que ter isso como padrao, verificar!
	printf("\n %d: %s\n", code, str);
	return (code);
}
