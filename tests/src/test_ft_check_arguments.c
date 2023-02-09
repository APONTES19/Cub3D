/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_arguments.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:52:58 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/03 12:39:44 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

void	test_ft_check_extension_expected_false()
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cu", "Maria.b", ".cub" , "a.cuba", "\0"};

	printf("\n \t |teste_ft_check_extension_expected_false| \n  ");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_extension(file[i], ".cub");
		printf("\n %d)  %s = ", i + 1, file[i]);
		if (result ==  FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}

void	test_ft_check_extension_expected_true()
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cub", "Maria.cub", "a.cub" , "file.cub", "\0"};

	printf("\n \t |test_ft_check_extension_expected_true| \n  ");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_extension(file[i], ".cub");
		printf("\n %d)  %s = ", i + 1, file[i]);
		if (result == SUCCESS )
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}


