/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_map_in_file.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:11:12 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/21 16:38:22 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void	test_map_in_file_wrong_failure(void);
static void	test_map_in_file_correct_sucess(void);

void	test_ft_get_map_in_file(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest ft_get_map_in_file();\033[0m\n\n");
	test_map_in_file_wrong_failure();
	test_map_in_file_correct_sucess();
	printf("\n==============================================\n");
}

static void	test_map_in_file_wrong_failure(void)
{
	int     i;
	char file[][100] = {
		"./maps/map_in_file_failure/map_frist_line_wrong.cub",
		"\0"
	};
    char **result;
	char **text;

	printf("    \033[0;33mTestando Mapas errados!\033[0m\n\n");
	i = 0;
	text = NULL;
	while(file[i][0] != '\0')
	{
		text = ft_read_all_file(file[i]);
		result = ft_get_map_in_file(text);
		printf("\n	%d => %s = ", i + 1, file[i]);
		if (result ==  NULL)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;

		// excluir esta linha de print.
		if(result != NULL)
		{
			int a;
			a = 0;
			while(result[a++])
				printf("%s", result[a]);
		}
		ft_free_two_point(text);
		if(result != NULL)
			ft_free_two_point(result);
	}
}

static void	test_map_in_file_correct_sucess(void)
{
	int     i;
	char file[][100] = {
		"./maps/map_in_file_sucess/map_frist_line_correct.cub",
		"\0"
	};
    char **result;
	char **text;

	printf("    \033[0;33mTestando Mapas Corretos!\033[0m\n\n");
	i = 0;
	text = NULL;
	while(file[i][0] != '\0')
	{
		text = ft_read_all_file(file[i]);
		result = ft_get_map_in_file(text);
		printf("\n	%d => %s = ", i + 1, file[i]);
		if (result ==  NULL)
			printf("\033[0;31m▥ fail \033[0m\n");
		else
			printf("\033[0;32mok ✓ \033[0m\n");
		i++;

		// excluir esta linha de print.
		if(result != NULL)
		{
			int a;
			a = 0;
			while(result[a++])
				printf("%s", result[a]);
		}
		ft_free_two_point(text);
		if(result != NULL)
			ft_free_two_point(result);
	}
}
