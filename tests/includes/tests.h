/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/25 17:52:48 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../../includes/cub3d.h"

//functions the test
void	main_test();
void	test_receiving_2arguments_expected_true();
void	test_receiving_1arguments_expected_false();
void	test_receiving_extension_wrong_expected_false();
void	test_receiving_extension_correct_expected_true();
void	test_receiving_extension_wrong_bcu_expected_false();
void	test_receiving_extension_wrong_wrgcub_expected_false();
void	test_receiving_extension_wrong_arq1cubcub_expected_false();

//ricardo testes

#endif
