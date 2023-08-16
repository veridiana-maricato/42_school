/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:49:32 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 22:10:14 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

//#include <unistd.h>
// void	ft_write(int n)
// {
// 	int char_t;
// 	int char_u;

// 	char_t = n/10 + 48;
// 	char_u = n%10 + 48;
// 	write(1, &char_t, 1);
// 	write(1, &char_u, 1);
// }

// int main(void)
// {
// 	int p;

// 	p = 10;
// 	ft_write(p);
// 	ft_ft(&p);
// 	ft_write(p);
// }