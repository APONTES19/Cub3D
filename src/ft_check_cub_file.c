/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cub_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:13:20 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/02/09 04:06:19 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


void ft_check_cub_file(char *path)
{
    char **text;
    
    text = ft_read_all_file(path);
    if(!text)
        exit(ft_error_mensagem(ERRO_CHECK_CUB_FILE,"Could not read <file>.cub!"));
    
}
