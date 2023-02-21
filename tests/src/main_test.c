/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:27:43 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/21 00:00:34 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "../includes/tests.h"

int	main(void)
{
/*
Vamos padronizar!

aqui vai ser

test_<nome da função>(bla bla)

para cada funcao do cub vamos ter como file sendo test_<nome da função>.c
dentro do arquivo vamos ter como nome da função, sendo:

static <nome_da_fucao>_correct_success
static <nome_da_fucao>_wrong_failure


Cria file test_util para criar função auxiliar que pode ser usado em outros teste




 */
	test_ft_check_extension();
	test_ft_check_file_exists();
	test_read_all_file();
	test_line_code();
	test_check_first_word_each_line ( );
	test_check_duplicated_flag ();
	test_check_line_position();
	test_check_value_flag();
	 test_get_map ();
	return (0);
}
