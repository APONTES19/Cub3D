/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_first_word_each_line.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 05:17:15 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/12 00:32:05 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void test_check_first_word_each_line_wrong_failure(void);
static void test_check_first_word_each_line_correct_success(void);

void test_check_first_word_each_line (void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest ft_check_first_word_each_line();\033[0m\n\n");
	test_check_first_word_each_line_wrong_failure();
	test_check_first_word_each_line_correct_success();
	printf("\n==============================================\n");
}


static void test_check_first_word_each_line_wrong_failure(void)
{
	int	result;
	int	i;
	char *temp;
    char **text;

	char path[] = {"./maps/check_first_word_each_line/" };
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
		result = ft_check_first_word_each_line(text);
		if (result == FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
	
        i++;			
        ft_free_two_point(text);
	}
}

//{ "sucess1.cub", "sucess2.cub", "sucess3.cub", "sucess4.cub", "\0"};

static void test_check_first_word_each_line_correct_success(void)
{
	
	int	result = 0;
	int	i;
	char *temp;
    char **text;

	char path[] = {"./maps/check_first_word_each_line/" };
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
			result = ft_check_first_word_each_line(text);
		if (result == SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
	
        i++;
		if(text != NULL)			
    	    ft_free_two_point(text);
	}
}