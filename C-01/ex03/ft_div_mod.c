/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:06:41 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 22:09:46 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b)
	{
	*div = a / b;
	*mod = a % b;
	}
}

// #include <unistd.h>
// void	ft_write(int n)
// {
// 	char char_t;
// 	char char_u;

// 	char_t = n/10 + 48;
// 	char_u = n%10 + 48;
// 	write(1, &char_t, 1);
// 	write(1, &char_u, 1);
// }

// int	main(void)
// {
// 	int t1;
// 	int t2;
// 	int	*pn_div;
// 	int	*pn_mod;

// 	t1 = 11;
// 	t2 = 10;
// 	pn_div = &t1;
// 	pn_mod = &t2;

// 	ft_write(*pn_mod);

// 	ft_div_mod(t1, t2, pn_div, pn_mod);

// 	ft_write(*pn_mod);
// }