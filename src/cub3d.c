/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:49:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/01/19 10:42:33 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	test_receiving_extension_wrong_expected_false();

	printf("\n\ntestado o Cub3D!\n");
	printf("Testando a Libft função ft_isanum(8) = resposta %d\n",
		ft_isalnum(8));
	printf("Testando a Libft função ft_isanum(c) = resposta %d\n",
		ft_isalnum('c'));
	printf("Abrindo uma tela de base :@ ! \n");

	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 400, 800, "My firt Window Cub3D");
	mlx_loop(mlx_ptr);
	(void) win_ptr;
	return 0;
}

int	ft_check_extension(char *argv)
{
	(void) argv;
	return(1);
}


