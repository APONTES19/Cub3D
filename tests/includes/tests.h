/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:27 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/30 22:38:42 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../../includes/cub3d.h"

//functions the test
void	test_receiving_extension_wrong_expected_false();
void	test_receiving_extension_correct_expected_true();
void	test_file_exists_wrong_expected_false();
void	test_file_exists_correct_expected_true();
int		ft_check_map_flag(int fd, char *c); //excluir
int		ft_check_map_path_img(int fd, char *c); //excluir
int		ft_check_map_flag_one(int fd, char c); //ecluir
void	test_receiving_map_wrong_no_false();
void	test_receiving_map_rigth_no_true();
void	test_receiving_map_rigth_path_no_true();
void	test_receiving_map_rigth_path_no_false();
void	test_receiving_map_wrong_f_false();

//ricardo testes

#endif
