/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 04:40:21 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/21 05:20:32 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"


static void correct_success(void);
static void wrong_failure(void);


void test_check_map(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest check map ;\033[0m\n\n");

	correct_success();
    wrong_failure();
	printf("\n==============================================\n");
    
}




static void correct_success(void)
{
	int	i;

    int result;
	char *temp;
    char **text;
    char    **map;

	char path[] = {"./maps/check_map/" };
	char	file[][800] = { "success1.cub", "success2.cub", "\0"};
	i = 0;
	printf("    \033[0;33mTestando com acerrto!\033[0m\n");


	
	while(file[i][0] != '\0')
	{
		temp = ft_strjoin(path, file[i]);
		text= ft_read_all_file(temp);
		printf("	%d => %s =\n ", i + 1, temp);
		ft_free_one_point(temp);
        map = ft_get_map(text);

		result = ft_check_map(map);
		if (result == SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
	
        ft_free_two_point(text);
        ft_free_two_point(map);
        i ++;
	}
}





static void wrong_failure(void)
{
	int	i;

    int result;
	char *temp;
    char **text;
    char    **map;

	char path[] = {"./maps/check_map/" };
	char	file[][800] = { "failure1.cub", "failure2.cub",  "failure3.cub",  "failure4.cub",
	 "failure5.cub",  "failure6.cub","\0"};
	i = 0;
	printf("    \033[0;33mTestando com erro!\033[0m\n");


	
	while(file[i][0] != '\0')
	{
		temp = ft_strjoin(path, file[i]);
		text= ft_read_all_file(temp);
		printf("	%d => %s =\n ", i + 1, temp);
		ft_free_one_point(temp);
        map = ft_get_map(text);

		result = ft_check_map(map);
		if (result == FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
	
        ft_free_two_point(text);
        ft_free_two_point(map);
        i ++;
	}
}