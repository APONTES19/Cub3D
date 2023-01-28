/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/27 22:40:36 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../../includes/cub3d.h"

//functions the test
void	test_receiving_extension_wrong_expected_false();
void	test_receiving_extension_correct_expected_true();
void    test_file_exists_wrong_expected_false();
void    test_file_exists_correct_expected_true();
int	ft_check_map(int fd, char *c); //excluir
void	test_receiving_map_wrong_no_false();
void	test_receiving_map_rigth_no_true();

//ricardo testes

#endif
