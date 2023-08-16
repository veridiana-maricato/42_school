/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:48:27 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 22:10:06 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
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

// int	main(void)
// {
// 	int p0;
// 	int *p1;
// 	int **p2;
// 	int ***p3;
// 	int ****p4;
// 	int *****p5;
// 	int ******p6;
// 	int *******p7;
// 	int ********p8;
// 	int *********p9;

// 	p1 = &p0;
// 	p2 = &p1;
// 	p3 = &p2;
// 	p4 = &p3;
// 	p5 = &p4;
// 	p6 = &p5;
// 	p7 = &p6;
// 	p8 = &p7;
// 	p9 = &p8;
// 	p0 = 3;

// 	char t = p0 + 48;
// 	write(1, &t, 2);
// 	write(1, "\n", 1);
// 	ft_ultimate_ft(p9);
// 	ft_write(p0);
// }