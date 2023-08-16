/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:50:14 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/06 22:05:37 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 	int ca;
// 	int cb;

// 	a = 5;
// 	b = 9;
// 	ft_swap(&a, &b);
// 	ca = a + 48;
// 	cb = b + 48;
// 	write(1, &ca, 1);
// 	write(1, &cb, 1);
// }