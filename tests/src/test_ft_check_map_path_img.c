/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_check_map_path_img.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:09:45 by lucasmar          #+#    #+#             */
/*   Updated: 2023/02/06 11:30:33 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static void	test_receiving_map_wrong_path_no_false();
static void	test_receiving_map_rigth_path_no_true();

void	test_ft_check_map_path_img(void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest test_ft_check_map_path_img();\033[0m\n\n");
	test_receiving_map_wrong_path_no_false();
	test_receiving_map_rigth_path_no_true();
	printf("\n==============================================\n");
}

static void	test_receiving_map_wrong_path_no_false()
{
	int	fd;
	int	result;
	int	i;

	char	file[][80000] = {
		"./maps/map_r_no_1.cub",
		"./maps/map_r_no_2.cub",
		"./maps/map_r_no_3.cub",
		"\0"
		};
	i = 0;
	printf("    \033[0;33mTestando caminho da imagem falso!\033[0m\n\n");
	while(file[i][0] != '\0')
	{
		fd = open(file[i], O_RDWR);
		printf("	%d => %s = ", i + 1, file[i]);
		result = ft_check_map_path_img(fd, "SO");
		if (result ==  FAILURE)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		if (fd != -1)
			close(fd);
		i++;
	}
}


static void	test_receiving_map_rigth_path_no_true()
{
	int	fd;
	int	result;
	int	i;

	char	file[][8000] = {
		"./maps/map_right_no_1.cub",
		"./maps/map_right_no_2.cub",
		"./maps/map_right_no_3.cub",
		"\0"
		};
	i = 0;
	printf("    \033[0;33mTestando caminho da imagem correto!\033[0m\n\n");
	while(file[i][0] != '\0')
	{
		fd = open(file[i], O_RDWR);
		printf("	%d => %s = ", i + 1, file[i]);
		result = ft_check_map_path_img(fd, "NO");
		if (result ==  SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		if (fd != -1)
			close(fd);
		i++;
	}
}
