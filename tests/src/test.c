/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:53:12 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/25 17:53:11 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tests.h"

int	main(void)
{
	test_receiving_2arguments_expected_true();
	test_receiving_1arguments_expected_false();
	test_receiving_extension_wrong_expected_false();
	test_receiving_extension_correct_expected_true();
	test_receiving_extension_wrong_bcu_expected_false();
	test_receiving_extension_wrong_wrgcub_expected_false();
	test_receiving_extension_wrong_arq1cubcub_expected_false();

	return(1);
}

void	test_receiving_2arguments_expected_true()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp_1;
	char	*temp_2;

	temp_1 = ft_strdup("argument_1");
	temp_2 = ft_strdup("argument_2");
	argv = (char **) malloc (3 * sizeof (char *));
	argv[0] = ft_strdup(temp_1);
	argv[1] = ft_strdup(temp_2);
	argv[2] = '\0';
	result = ft_check_number_arguments(argv);
	printf("\n 01 test_receiving_2arguments_expected_false = ");
	expected = 0;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	ft_free_two_point(argv);
	ft_free_one_point(temp_1);
	ft_free_one_point(temp_2);
}

void	test_receiving_1arguments_expected_false()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp_1;

	temp_1 = ft_strdup("argument_1");
	argv = (char **) malloc (2 * sizeof (char *));
	argv[0] = ft_strdup(temp_1);
	argv[1] = '\0';
	result = ft_check_number_arguments(argv);
	printf("\n 02 test_receiving_1arguments_expected_true = ");
	expected = 1;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	ft_free_two_point(argv);
	ft_free_one_point(temp_1);
}

void	test_receiving_extension_wrong_expected_false()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp;

	temp = ft_strdup("extension_wrong.txt");
	argv = (char **) malloc ( 3 * sizeof (char *));
	argv[0] = ft_strdup("name_programe");
	argv[1] = ft_strdup(temp);
	argv[2] = '\0';
	result = ft_check_extension(argv);
	printf("\n 03 test_receiving_extension_wrong_expected_false = ");
	expected = 1;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	ft_free_two_point(argv);
	ft_free_one_point(temp);
}

void	test_receiving_extension_correct_expected_true()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp;

	temp = ft_strdup("extension_correct.cub");
	argv = (char **) malloc ( 3 * sizeof (char *));
	argv[0] = ft_strdup("name_programe");
	argv[1] = ft_strdup(temp);
	argv[2] = '\0';
	result = ft_check_extension(argv);
	printf("\n 04 test_receiving_extension_correct_expected_true = ");
	expected = 0;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	ft_free_two_point(argv);
	ft_free_one_point(temp);
}

void	test_receiving_extension_wrong_bcu_expected_false()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp;

	temp = ft_strdup("extension_wrong.bcu");
	argv = (char **) malloc (3 * sizeof (char *));
	argv[0] = ft_strdup("name_programe");
	argv[1] = ft_strdup(temp);
	argv[2] = '\0';
	result = ft_check_extension(argv);
	printf("\n 05 test_receiving_extension_wrong_bcu_expected_false = ");
	expected = 1;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	ft_free_two_point(argv);
	ft_free_one_point(temp);
}

void	test_receiving_extension_wrong_wrgcub_expected_false()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp;

	temp = ft_strdup("wrgcub");
	argv = (char **) malloc ( 3 * sizeof (char *));
	argv[0] = ft_strdup("name_programe");
	argv[1] = ft_strdup(temp);
	argv[2] = '\0';
	result = ft_check_extension(argv);
	printf("\n 06 test_receiving_extension_wrong_wrgcub_expected_false = ");
	expected = 1;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	ft_free_two_point(argv);
	ft_free_one_point(temp);
}

void	test_receiving_extension_wrong_arq1cubcub_expected_false()
{
	int	result;
	int	expected;
	char	**argv;
	char	*temp;

	temp = ft_strdup("arq1.cubcub");
	argv = (char **) malloc ( 3 * sizeof (char *));
	argv[0] = ft_strdup("name_programe");
	argv[1] = ft_strdup(temp);
	argv[2] = '\0';
	result = ft_check_extension(argv);
	printf("\n 07 test_receiving_extension_wrong_wrgcub_expected_false = ");
	expected = 1;
	if (result == expected)
		printf("\033[0;32mok ✓ \033[0m\n");
	else
		printf("\033[0;31m▥ fail \033[0m\n");
	ft_free_two_point(argv);
	ft_free_one_point(temp);
}
