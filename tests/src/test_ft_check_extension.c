/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_extension.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:18:12 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/03 13:04:15 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void	test_check_extension_wrong_failure(void);
static void	test_check_extension_correct_success(void);

void	test_ft_check_extension(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest ft_check_extension();\033[0m\n\n");
	test_check_extension_wrong_failure();
	test_check_extension_correct_success();
	printf("\n==============================================\n");
}


static void	test_check_extension_wrong_failure(void)
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cu", "Maria.b", ".cub" , "a.cuba", "\0"};

	printf("    \033[0;33mTestando extenções erradas!\033[0m\n\n");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_extension(file[i], ".cub");
		printf("	%d => %s = ", i + 1, file[i]);
		if (result ==  FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}

static void	test_check_extension_correct_success(void)
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cub", "Maria.cub", "a.cub" , "file.cub", "\0"};

	printf("\n    \033[0;33mTestando extenções corretas!\033[0m\n\n");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_check_extension(file[i], ".cub");
		printf("	%d => %s = ", i + 1, file[i]);
		if (result == SUCCESS )
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
	}
}
