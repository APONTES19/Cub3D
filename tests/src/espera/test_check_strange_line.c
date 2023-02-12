/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_strange_line.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 05:17:15 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/09 06:02:34 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

static void test_check_strange_line_wrong_failure(void);
static void test_check_strange_line_correct_success(void);

void test_check_strange_line (void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest ft_check_strange_line();\033[0m\n\n");
	test_check_strange_line_wrong_failure();
	test_check_strange_line_correct_success();
	printf("\n==============================================\n");
}


static void test_check_strange_line_wrong_failure(void)
{
	int	result;
	int	i, j;
    char **text;

	char	file[][800] = {
		"./maps/rgb/failure1.cub",
     //   "./maps/rgb/failure2.cub",
       // "./maps/rgb/failure3.cub",
        //"./maps/rgb/failure4.cub",
        //"./maps/rgb/failure5.cub",
        //"./maps/rgb/failure6.cub",
		"\0"
		};
	i = 0;
	printf("    \033[0;33mTestando RGB com erro 'F'!\033[0m\n\n");
	while(file[i][0] != '\0')
	{
		text= ft_read_all_file(file[i]);
		printf("	%d => %s = ", i + 1, file[i]);
		result = ft_check_strange_line(text);
		if (result == FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		i++;
        j = 0;
        while(text[j])
            printf("%s", text[j++]);
        ft_free_two_point(text);
	}
}


static void test_check_strange_line_correct_success(void)
{
	int	fd;
	int	result;
	int	i;

	char	file[][800] = {
		"./maps/rgb/success1.cub",
        "./maps/rgb/success2.cub",
        "./maps/rgb/success3.cub",
        "./maps/rgb/success4.cub",
		"\0"
		};
	i = 0;
	printf("    \033[0;33mTestando RGB com acerto 'F'!\033[0m\n\n");
	while(file[i][0] != '\0')
	{
		fd = open(file[i], O_RDWR);
		printf("	%d => %s = ", i + 1, file[i]);
		result = ft_check_map_rgb(fd, 'F');
		if (result == SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		close(fd);
		i++;
	}
}