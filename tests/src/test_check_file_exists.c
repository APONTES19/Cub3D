/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_file_exists.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:10:11 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/01 17:39:34 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/tests.h"

static void test_check_file_exists_correct_success();
static void test_check_file_exists_wrong_failure();

void test_check_file_exists(void)
{
    printf("\n\t +Check File Exist+");
    test_check_file_exists_correct_success();
    test_check_file_exists_wrong_failure();
}




static void test_check_file_exists_wrong_failure()
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cub", "Maria.cub", "a.cub" , "file.cub", "\0"};

	printf("\n \t |test_check_file_exists_wrong_failure| \n  ");
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

static void test_check_file_exists_correct_success()
{
	int	result;
	int  i;
	char file[][100] = { "./src/main_test.c", "../src/cub3d.c", "\0"};

	printf("\n \t | test_check_file_exists_correct_success| \n  ");
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