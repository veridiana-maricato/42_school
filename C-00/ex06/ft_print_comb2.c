/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:38:48 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/06 19:31:47 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check_last(int l)
{
	if (l != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_chars(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_nums_to_chars(int n, int max)
{
	char	u;
	char	d;

	if (n <= 9)
	{
		u = n + 48;
		ft_print_chars(48, u);
	}
	else if (n <= max)
	{
		u = n % 10 + 48;
		d = n / 10 + 48;
		ft_print_chars(d, u);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_nums_to_chars(first, 98);
			write(1, " ", 1);
			ft_nums_to_chars(second, 99);
			ft_check_last(first);
			second++;
		}
		first++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
