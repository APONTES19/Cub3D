/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_map_wall.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:53:12 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/06 11:26:37 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

void	test_receiving_map_wrong_no_false()
{
	int	fd;
	int	result;
	int	i;

	char	file[][80000] = {
		"./maps/map_wrong_no_1.cub",
		"./maps/map_wrong_no_2.cub",
		"./maps/map_wrong_no_3.cub",
		"./maps/map_wrong_no_4.cub",
		"./maps/map_wrong_no_5.cub",
		"./maps/map_wrong_no_6.cub",
		"./maps/map_wrong_no_7.cub",
		"./maps/map_wrong_no_8.cub",
		"./maps/map_wrong_no_9.cub",
		"./maps/map_wrong_no_10.cub",
		"\0"
		};
	i = 0;
	printf("\n \t |test_receiving_map_wrong_no_false| \n  ");
	while(file[i][0] != '\0')
	{
		fd = open(file[i], O_RDWR);
		printf("\n %d)  %s = ", i + 1, file[i]);
		result = ft_check_map_flag(fd, "NO");
		if (result ==  FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		close(fd);
		i++;
	}
}

void	test_receiving_map_rigth_no_true()
{
	int	fd;
	int	result;
	int	i;

	char	file[][8000] = {
		"./maps/map_r_no_2.cub",
		"./maps/map_r_no_3.cub",
		"./maps/map_r_no_1.cub",
		"\0"
		};
	i = 0;
	printf("\n \t |test_receiving_map_rigth_no_true| \n  ");
	while(file[i][0] != '\0')
	{
		fd = open(file[i], O_RDWR);
		printf("\n %d)  %s = ", i + 1, file[i]);
		result = ft_check_map_flag(fd, "NO");
		if (result ==  SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		close(fd);
		i++;
	}
}
