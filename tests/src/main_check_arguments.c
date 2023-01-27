/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_arguments.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 02:42:33 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/01/27 03:23:38 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

esse arquivo so serve para testar a função "ft_check_arguments.c"

alguns caso interessantes testar 

a) Em relação a quantidade de argumento 
a1) sem argumento 
valgrind --show-leak-kinds=all --track-origins=yes --leak-check=full ./teste

a2) mais de um argumento 
valgrind --show-leak-kinds=all --track-origins=yes --leak-check=full ./teste  oi Lucas

a3) com um argumento 
valgrind --show-leak-kinds=all --track-origins=yes --leak-check=full ./teste  oi 


b) Em relacao a exentsao

b1) com extensao errado
valgrind --show-leak-kinds=all --track-origins=yes --leak-check=full ./teste  porco.cb

b2) com somente a extensao 
valgrind --show-leak-kinds=all --track-origins=yes --leak-check=full ./teste  cub
valgrind --show-leak-kinds=all --track-origins=yes --leak-check=full ./teste  .cub

c) com um argumento e extensao correto so que o arquivo nao existe

c1) obs: arquivo lucas.cub nao pode existir 
valgrind --show-leak-kinds=all --track-origins=yes --leak-check=full ./teste  lucas.cub

c2) coloque tudo certo veja se da certo

*/


#include "../includes/tests.h"

int	main(int argc, char **argv)
{
	ft_check_arguments(argc, argv);
	printf("\nTudo ok\n");
	return(0);
}