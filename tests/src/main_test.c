/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:27:43 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/01/24 03:02:52 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "../includes/tests.h"

int	main(void)
{
	test_receiving_2arguments_expected_true();
	test_receiving_1arguments_expected_false();

	
	test_receiving_extension_wrong_expected_false();

	return (0);
}