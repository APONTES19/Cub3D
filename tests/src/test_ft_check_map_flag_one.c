/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_check_map_flag_one.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:21:23 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/06 10:31:45 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static void	test_receiving_map_wrong_f_false();
static void	test_receiving_map_wrong_f_true();

void	test_ft_check_map_flag_one(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest test_ft_check_map_flag_one();\033[0m\n\n");
	test_receiving_map_wrong_f_false();
	test_receiving_map_wrong_f_true();
	printf("\n==============================================\n");
}

static void	test_receiving_map_wrong_f_false()
{
	int	fd;
	int	result;
	int	i;

	char	file[][80000] = {
		"./maps/map_right_no_1.cub",
		"./maps/map_wrong_no_3.cub",
		"./maps/map_right_no_3.cub",
		"\0"
		};
	i = 0;
	printf("    \033[0;33mTestando map errado sem a flag 'F'!\033[0m\n\n");
	while(file[i][0] != '\0')
	{
		fd = open(file[i], O_RDWR);
		printf("	%d => %s = ", i + 1, file[i]);
		result = ft_check_map_flag_one(fd, 'F');
		if (result == FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		close(fd);
		i++;
	}
}

static void	test_receiving_map_wrong_f_true()
{
	int	fd;
	int	result;
	int	i;

	char	file[][80000] = {
		"./maps/map_wrong_no_8.cub",
		"./maps/map_wrong_no_9.cub",
		"./maps/map_wrong_no_10.cub",
		"\0"
		};
	i = 0;
	printf("    \033[0;33m\nTestando map correto com a flag 'F'!\033[0m\n\n");
	while(file[i][0] != '\0')
	{
		fd = open(file[i], O_RDWR);
		printf("	%d => %s = ", i + 1, file[i]);
		result = ft_check_map_flag_one(fd, 'F');
		if (result == SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		close(fd);
		i++;
	}
}
