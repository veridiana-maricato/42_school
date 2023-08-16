/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:10:31 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 22:09:06 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c1;
	int	c2;
	int	temp;

	c1 = 0;
	c2 = size;
	while (c1 < (size / 2))
	{
		c2--;
		temp = tab[c1];
		tab[c1] = tab[c2];
		tab[c2] = temp;
		c1 ++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int c;

// 	int arr[] = {1, 2, 3, 4, 7, 8};
// 	ft_rev_int_tab(arr, 6);

// 	c = 0;
// 	while(c < 6)
// 	{
// 		printf("%d\n", arr[c]);
// 		c++;
// 	}
// }