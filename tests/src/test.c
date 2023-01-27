/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:53:12 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/21 20:27:56 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"


void	test_receiving_2arguments_expected_true()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp_1;
	char	*temp_2;

	temp_1 = ft_strdup("argument_1");
	temp_2 = ft_strdup("argument_2");
	argv = (char **) malloc (2 * sizeof (char *));
	argv[0] = ft_strdup(temp_1);
	argv[1] = ft_strdup(temp_2);
	result = ft_check_number_arguments(argv);
	printf("\n 01 test_receiving_2arguments_expected_false = ");
	expected = 0;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	free(argv);
	argv = NULL;
}

void	test_receiving_1arguments_expected_false()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp_1;

	temp_1 = ft_strdup("argument_1");
	argv = (char **) malloc (1 * sizeof (char *));
	argv[0] = ft_strdup(temp_1);
	result = ft_check_number_arguments(argv);
	printf("\n 02 test_receiving_1arguments_expected_true = ");
	expected = 1;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	free(argv);
	argv = NULL;
}

void	test_receiving_extension_wrong_expected_false()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp;

	temp = ft_strdup("extension_wrong.txt");
	argv = (char **) malloc ( 2 * sizeof (char *));
	argv[0] = ft_strdup("name_programe");
	argv[1] = ft_strdup(temp);
	result = ft_check_extension(argv);
	printf("\n03 teste_receiving_extension_wrong_expected_false = ");
	expected = 1;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	free(argv);
	argv = NULL;
}
