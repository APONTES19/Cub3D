/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:27:43 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/01 17:32:39 by ryoshio-         ###   ########.fr       */
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

Meta para hoje:
[]organizar os arquivos;
[] leak de memoria
[] makefile com opção run (que seria rodar valgrind tanto do teste e do cub)
[] finaliza funçao ft_check_map_flag e ft_check_map_path_img
[] ajustar a meta para outro dia

Meta para quinta
[] cria check float e sky (talvez consiguimos reaproveita funções?)
[] checagem do mapa se a lateral tem 1 (tanto em cima e ebaixo)
[] pensar como resolver quando de buraco no mapa
[ ] verifcar elemento que tem quer ter no mapa e implementar o check
[] ajustar a meta para outro dia


Meta para sexta
[] pegar o valor dos pontos cardiais;
[] pegar o valor do sky e floor
[] pegar valor do mapa
[] ajustar a meta para outro dia

Sabado
[] fazer meta para proximo ciclo
[] fazer refatoração tanto do codigo cub e do teste
[] Figura do mapa

Domingo
meta completo descanso caso contrario bate a meta


Meta desse ciclo:
[X] check arg e agrc
[X]makefile
[X]biblioteca
[] check o mapa (completo)
[] pegar os valores desejado do mapa
[]definir as figuras da paredes e do boneco
 */
	test_check_extension( );
	test_check_file_exists();
	
	/*
	
	test_file_exists_wrong_expected_false();
	test_file_exists_correct_expected_true();


	test_receiving_map_wrong_no_false();
	
	test_receiving_map_rigth_no_true();

	
	test_receiving_map_rigth_path_no_true();
	
	test_receiving_map_rigth_path_no_false();
	test_receiving_map_wrong_f_false();
*/
	return (0);
}
