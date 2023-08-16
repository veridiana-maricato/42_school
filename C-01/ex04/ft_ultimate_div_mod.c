/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:58:31 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 21:34:49 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b)
	{
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
	}
}

// #include <unistd.h>
// void	ft_write(int n)
// {
// 	char	char_t;

// 	char_t = n + 48;
// 	write(1, &char_t, 1);
// 	write(1, "\n", 1);
// }

// int	main(void)
// {
// 	int *p1;
// 	int *p2;
// 	int a;
// 	int b;

// 	a = 7;
// 	b = 2;
// 	p1 = &a;
// 	p2 = &b;

// 	ft_write(*p1);
// 	ft_ultimate_div_mod(p1, p2);
// 	ft_write(*p1);
// 	ft_write(*p2);
// }