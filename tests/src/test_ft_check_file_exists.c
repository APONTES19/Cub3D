/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_check_file_exists.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:10:11 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/04 17:11:26 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/tests.h"

static void test_check_file_exists_correct_success();
static void test_check_file_exists_wrong_failure();

void test_ft_check_file_exists(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest ft_check_file_exists();\033[0m\n\n");
    test_check_file_exists_wrong_failure();
    test_check_file_exists_correct_success();
	printf("\n==============================================\n");
}




static void test_check_file_exists_wrong_failure()
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cub", "Maria.cub", "a.cub" , "file.cub", "\0"};

	printf("    \033[0;33mTestando arquivos que não existem!\033[0m\n\n");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_file_exists(file[i]);
		printf("	%d => %s = ", i + 1, file[i]);
		if (result == FAILURE )
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}

static void test_check_file_exists_correct_success()
{
	int	result;
	int  i;
	char file[][100] = { "./maps/map_r_no_1.cub", "./maps/map_r_no_2.cub", "\0"};

	printf("\n    \033[0;33mTestando arquivos que existem!\033[0m\n\n");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_file_exists(file[i]);
		printf("	%d => %s = ", i + 1, file[i]);
		if (result == SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}
