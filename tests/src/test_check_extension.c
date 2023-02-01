/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_extension.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:18:12 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/01 17:00:39 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void	test_check_extension_wrong_failure(void);
static void	test_check_extension_correct_success(void);

void test_check_extension(void)
{
    printf("\t *******Check extension ******");
    test_check_extension_wrong_failure( );
    test_check_extension_correct_success();
}



static void	test_check_extension_wrong_failure(void)
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cu", "Maria.b", ".cub" , "a.cuba", "\0"};

	printf("\n \t |test_check_extension_wrong_failure| \n  ");
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

static void	test_check_extension_correct_success(void)
{
	int	result;
	int  i;
	char file[][10] = { "Joao.cub", "Maria.cub", "a.cub" , "file.cub", "\0"};

	printf("\n \t |test_check_extension_correct_success| \n  ");
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