/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:44:47 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/14 23:39:12 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

// #include <unistd.h>
// // int main(void)
// // {
// //     char *s;

// //     s = "Hello world!";
// //     ft_putstr(s);
// // }