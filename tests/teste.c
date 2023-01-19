#include "../includes/cub3d.h"

void	test_receiving_extension_wrong_expected_false()
{
	int	result;
	char	*argv;

	argv = ft_strdup("map_exemple_extension_fail.ext");
	result = ft_check_extension(argv);
	printf("\n01 teste_receiving_extension_wrong_expected_false = ");
	if (result == 1)
		printf("ok\n");
	else
		printf("fail\n");
}
