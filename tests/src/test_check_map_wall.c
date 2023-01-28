/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_map_wall.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:53:12 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/27 22:51:02 by lucasmar         ###   ########.fr       */
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
		"./maps/map_wrong_no_8.cub"
		};
	i = 0;
	printf("\n \t |test_receiving_map_wrong_no_false| \n  ");
	while(file[i][1])
	{
		fd = open(file[i], O_RDWR);
		printf("\n %d)  %s = ", i + 1, file[i]);
		result = ft_check_map(fd, "NO");
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
		"./maps/map_right_no_1.cub",
		"./maps/map_right_no_2.cub",
		"./maps/map_right_no_3.cub"
		};
	i = 0;
	printf("\n \t |test_receiving_map_rigth_no_true| \n  ");
	while(file[i][1])
	{
		fd = open(file[i], O_RDWR);
		printf("\n %d)  %s = ", i + 1, file[i]);
		result = ft_check_map(fd, "NO");
		if (result ==  SUCCESS)
			printf("\033[0;32mok ✓ \033[0m\n");
		else
			printf("\033[0;31m▥ fail \033[0m\n");
		close(fd);
		i++;
	}
}

int	ft_check_map(int fd, char *c)
{
	char	*line;
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		while(line[i] == ' ')
			i++;
		if(line[i] == c[0] && line[i + 1] == c[1] && line[i + 2] == ' ')
			flag++;
		free(line);
		line = NULL;
		i = 0;
	}
	if (flag == 1)
		return(SUCCESS);
	return(FAILURE);
}

int	ft_check_map_path_img(int fd, char *c)
{
	char	*line;
	char	**list_line;

	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		if (ft_strnstr(line, c, ft_strlen(line)) != 0)
		{
			list_line = ft_split(line);
			if (open(list_line[1], O_RDWR) != -1)
				return(SUCCESS);
			else
				return(FAILURE);
		}
		free(line);
		line == null;
		while(list_line[i])
		{

		}
	}
	return(FAILURE);
}
