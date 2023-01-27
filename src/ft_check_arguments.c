/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:47:07 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/01/27 02:13:04 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

static void	ft_check_extension(const char	*argv);
static void ft_check_amount_argument(int argc);
static void check_file_exists(const char *argv);


void ft_check_arguments(int argc, char **argv)
{
    ft_check_amount_argument(argc);
    ft_check_extension(argv[1]);
    check_file_exists(argv[1]);
}


static void ft_check_amount_argument(int argc)
{
    if(argc != 2)
        exit(ft_error_message(ERROR_ARG, "The amount of argument is wrong!"));
}


static void	ft_check_extension(const char	*argv)
{
	if (ft_strlen(argv) < 5)
		exit(ft_error_message(ERROR_ARG, "Invalid extension"));
	if (ft_strncmp(".cub", argv + ft_strlen(argv)- 4, 5))
		exit(ft_error_message(ERROR_ARG, "Invalid extension"));
}

static void check_file_exists(const char *argv)
{
    int fd;

    fd = open (argv,  O_RDWR);
    if(fd < 1)
    {
        close(fd);
         exit(ft_error_message(ERROR_ARG, "Invalid file"));
    }
       
    close(fd);
}       