/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:28:16 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/11 21:43:24 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_error_message(int code, const char *str)
{
	printf("Error\n"); //parece que tem que ter isso como padrao, verificar!
	if(code == ERROR_MSG)
		printf("\t%d: %s\n", code, str);
	if(code == ERROR_EXTENSION)
		printf("\t%d: The %s has the wrong extension!\n", code, str);
	if(code == ERROR_FOUND)
		printf("\t%d: %s not found or not open!\n", code, str);
	if(code == ERROR_READ)
		printf("\t%d: It was not possible to read!\n%s\n", code, str);
	if (code == ERROR_LINE)
		printf("\t%d: The map line contains some error!\n%s\n", code, str);
	if (code == ERROR_COUNT_FLAG)
		printf("\t%d: The %s is duplicated or missing!\n", code, str);
		
	return (FAILURE);
}
