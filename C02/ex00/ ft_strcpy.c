/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:50:17 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 23:50:17 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int c;

    c = 0;
    while(*src)
    {
        dest[c] = src[c];
        c++;
        src++;
    }
    return (dest);
}

int main(void)
{
    char *str;
    char *copy;
    char *result;

    copy = "";
    str = "Hi world...";
    result = ft_strcpy(str, copy);
    printf("%s\n", result);
}