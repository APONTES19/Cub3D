/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_line_code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:38:33 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/11 23:21:33 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void test_line_code_correct_success();
static void test_line_code_wrong_failure();


void test_line_code(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest ft_line_code() e  ft_flag_code();\033[0m\n\n");
    test_line_code_wrong_failure();
     test_line_code_correct_success();
	printf("\n==============================================\n");
}

static void test_line_code_wrong_failure()
{
	int	result;
	int  i;
    char file[][500] = { "./maps/check_file_exists/map_r_no_1.cub", "./maps/check_file_exists/map_r_no_2.cub", "\0"};
	

	printf("    \033[0;33mTestando arquivos que não existem!\033[0m\n\n");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_line_code(file[i]);
		printf("	%d => %s = ", i + 1, file[i]);
        printf("valor = %d |", result);
		if (result == FAILURE )
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}

static void test_line_code_correct_success()
{

	printf("\n    \033[0;33mTestando arquivos que existem!\033[0m\n\n");
	
    

	printf("	%d => %s = ", 1, "NO");
	if ( ft_line_code("NO") == NO)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");

	printf("	%d => %s = ", 2, "   WE   ");
	if ( ft_line_code("   WE   ") == WE)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");

	printf("	%d => %s = ", 3, "  F   ");
	if ( ft_line_code("  F   ") == F)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");



}
