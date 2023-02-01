/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_arguments.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:52:58 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/01 01:19:24 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"


void	test_receiving_extension_wrong_expected_false()
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cu", "Maria.b", ".cub" , "a.cuba", "\0"};

	printf("\n \t |teste_receiving_extension_wrong_expected_false| \n  ");
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

void	test_receiving_extension_correct_expected_true()
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cub", "Maria.cub", "a.cub" , "file.cub", "\0"};

	printf("\n \t |test_receiving_extension_correct_expected_true| \n  ");
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

void test_file_exists_wrong_expected_false()
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cub", "Maria.cub", "a.cub" , "file.cub", "\0"};

	printf("\n \t |test_file_exists_wrong_expected_false| \n  ");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_file_exists(file[i]);
		printf("\n %d)  %s = ", i + 1, file[i]);
		if (result == FAILURE )
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}

void test_file_exists_correct_expected_true()
{
	int	result;
	int  i;
	char file[][100] = { "./src/main_test.c", "../src/cub3d.c", "\0"};

	printf("\n \t |test_file_exists_correct_expected_true| \n  ");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_file_exists(file[i]);
		printf("\n %d)  %s = ", i + 1, file[i]);
		if (result == SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}
