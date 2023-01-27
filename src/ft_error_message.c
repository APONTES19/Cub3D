/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:28:16 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/01/27 00:57:12 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

int ft_error_message(int code, const char *str)
{
    printf("\n %d: %s\n", code, str);
    return (code);
}