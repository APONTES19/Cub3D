/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:28:16 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/30 21:10:45 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static void	ft_error_2(int code, const char *str);

int	ft_error_message(int code, const char *str)
{
	printf("Error\n");
	if (code == ERROR_MSG)
		printf("\t%d: %s\n", code, str);
	if (code == ERROR_EXTENSION)
		printf("\t%d: The %s has the wrong extension!\n", code, str);
	if (code == ERROR_FOUND)
		printf("\t%d: %s not found or not open!\n", code, str);
	if (code == ERROR_READ)
		printf("\t%d: It was not possible to read!\n%s\n", code, str);
	if (code == ERROR_LINE)
		printf("\t%d: The map line contains some error!\n%s\n", code, str);
	if (code == ERROR_COUNT_FLAG)
		printf("\t%d: The %s is duplicated or missing!\n", code, str);
	if (code == ERROR_LINE_WRONG_POSITION)
		printf("\t%d: This line is in wrong position "
			"or should not exist!\n%s\n", code, str);
	else
		ft_error_2(code, str);
	return (FAILURE);
}

static void	ft_error_2(int code, const char *str)
{
	if (code == ERROR_RGB)
		printf("\t%d: This value for RGB is wrong! \n%s\n", code, str);
	if (code == ERROR_RGB_2)
		printf("\t%d: The value is RGB doubled ceiling end floor! \n%s\n",
			code, str);
	if (code == ERROR_MALLOC)
		printf("\t%d: The variable showed malloc error! \n%s\n", code, str);
	if (code == ERROR_WIN)
		printf("\t%d: The error in creat windows! \n%s\n", code, str);
}
