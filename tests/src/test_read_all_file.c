/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read_all_file.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:11:12 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/09 03:38:26 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void	test_read_all_file_wrong_failure(void);
static void	test_read_all_file_correct_success(void);

void	test_read_all_file(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest ft_read_all_file();\033[0m\n\n");
	test_read_all_file_wrong_failure();
	test_read_all_file_correct_success();
	printf("\n==============================================\n");
}

static void	test_read_all_file_wrong_failure(void)
{
	int     i;
    int     j;
	char file[][100] = {"arquivo_nao_existe.cub", "criar_mais_teste.cub","\0"};
    char **result;
    
	printf("    \033[0;33mTestando extenções erradas!\033[0m\n\n");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_read_all_file(file[i]);
		printf("\n	%d => %s = ", i + 1, file[i]);
		if (result ==  NULL)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
        i++;
        if(!result)
            continue;
        j = 0;
        while(result[j])
            printf("%s", result[j++]);
        ft_free_two_point(result);
	
	}
}

static void	test_read_all_file_correct_success(void)
{
	int     i;
    int     j;
	char file[][100] = {"./test_maps/read_all_file/vazio.cub","./test_maps/read_all_file/vazio1.cub", "\0"};
    char **result;
    
	printf("    \033[0;33mTestando extenções correta!\033[0m\n\n");
	i = 0;
	while(file[i][0] != '\0')
	{
		result = ft_read_all_file(file[i]);
		printf("\n	%d => %s = ", i + 1, file[i]);
		if (result !=  NULL)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
        i++;
        if(!result)
            continue;
        j = 0;
        while(result[j])
            printf("%s", result[j++]);
        ft_free_two_point(result);
	
	}
}
