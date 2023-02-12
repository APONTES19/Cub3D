/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_duplicated_flag.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:06:05 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/12 01:38:40 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void test_check_duplicated_flag_wrong_failure(void);
static void test_check_duplicated_flag_correct_success(void);

void test_check_duplicated_flag (void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest check_duplicated_flag ;\033[0m\n\n");
	test_check_duplicated_flag_wrong_failure();
	test_check_duplicated_flag_correct_success();
	printf("\n==============================================\n");
}


static void test_check_duplicated_flag_wrong_failure(void)
{
	int	result;
	int	i;
	char *temp;
    char **text;

	char path[] = {"./maps/check_duplicated_flag/" };
	char	file[][800] = { "failure1.cub", "failure2.cub", "failure3.cub",  "failure4.cub", 
	"failure5.cub", "failure6.cub","\0"};
	i = 0;
	printf("    \033[0;33mTestando com erro 'F'!\033[0m\n\n");
	while(file[i][0] != '\0')
	{
		temp = ft_strjoin(path, file[i]);
		text= ft_read_all_file(temp);
		printf("	%d => %s = ", i + 1, temp);
		ft_free_one_point(temp);
		result = ft_check_duplicated_flag(text);
		if (result == FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
	
        i++;			
        ft_free_two_point(text);
	}
}

//{ "sucess1.cub", "sucess2.cub", "sucess3.cub", "sucess4.cub", "\0"};

static void test_check_duplicated_flag_correct_success(void)
{
	
	int	result = 0;
	int	i;
	char *temp;
    char **text;

	char path[] = {"./maps/check_duplicated_flag/" };
	char	file[][800] = { "success1.cub", "success2.cub", "success3.cub", "success4.cub", "\0"};
	i = 0;
	printf("    \033[0;33mTestando com acerrto!\033[0m\n\n");


	
	while(file[i][0] != '\0')
	{
		temp = ft_strjoin(path, file[i]);
		text= ft_read_all_file(temp);
		printf("	%d => %s = ", i + 1, temp);
		ft_free_one_point(temp);
		if(text != NULL)
			result = ft_check_duplicated_flag(text);
		if (result == SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
	
        i++;
		if(text != NULL)			
    	    ft_free_two_point(text);
	}
}