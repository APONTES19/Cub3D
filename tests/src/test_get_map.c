/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:57:13 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/03/06 21:59:52 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/tests.h"


static void correct_success(void);

void test_get_map (void)
{
	printf("\n==============================================\n");
	printf("\n\033[0;36mTest get_map ;\033[0m\n\n");

	correct_success();
	printf("\n==============================================\n");
}




static void correct_success(void)
{
	int	i;
    int j;
	char *temp;
    char **text;
    char    **map;

	char path[] = {"./maps/get_map/" };
	char	file[][800] = { "success1.cub", "success2.cub", "\0"};
	i = 0;
	printf("    \033[0;33mTestando com acerto!\033[0m\n");



	while(file[i][0] != '\0')
	{
		temp = ft_strjoin(path, file[i]);
		text= ft_read_all_file(temp);
		printf("	%d => %s =\n ", i + 1, temp);
		ft_free_one_point(temp);
        map = ft_get_map(text);

        j = 0;
        while (map[j])
        {

           printf("%s", map[j]);
            j++;
        }
        ft_free_two_point(text);
        ft_free_two_point(map);
        i ++;

	}
}
