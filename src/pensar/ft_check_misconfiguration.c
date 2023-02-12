/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_misconfiguration.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:50:01 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/08 19:51:40 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

static int ft_check_auxiliary(char const *path, char  *flag, int f( int, char*));
int ft_check_misconfiguration(const char *str)
{
    
    return (ft_check_auxiliary(str,"NO" , ft_check_map_flag));
    /*
    int file;
    int status;

    file = open(str, O_RDWR);
    status = ft_check_map_flag(file, "NO");
    close (file);
    if ( status == FAILURE)
        return(ft_erro_message(ERROR_MISCONFIGURATION, "The NO configuration is wrong!"));
    file = open(str, O_RDWR);
    status = ft_check_map_flag(file, "NO");
    close (file);
    if ( status == FAILURE)
        return(ft_erro_message(ERROR_MISCONFIGURATION, "The NO configuration is wrong!"));

    */
}

static int ft_check_auxiliary(char const *path, char  *flag, int f( int, char*))
{
    int file;
    int status;

    file = open(path, O_RDWR);
    status = f(file, flag);
    close (file);
    return (status);
}

