/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:27:43 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/01/27 21:33:25 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "../includes/tests.h"

int	main(void)
{
	test_receiving_extension_wrong_expected_false();
	test_receiving_extension_correct_expected_true();
	test_file_exists_wrong_expected_false();
	test_file_exists_correct_expected_true();
	test_receiving_map_wrong_no_false();
	test_receiving_map_rigth_no_true();
	return (0);
}
