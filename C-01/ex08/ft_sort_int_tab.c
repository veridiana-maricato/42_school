/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 01:18:12 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 22:08:41 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	temp;

	while (size > 0)
	{
		counter = 0;
		while (counter < (size -1))
		{
			if (tab[counter] < tab[counter + 1])
			{
				temp = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = temp;
			}
			counter ++;
		}
		size --;
	}
}

//  #include <stdio.h>
// int main(void)
// {
// 	int arr[] = {5,1,7,3,4};

// 	ft_sort_int_tab(arr, 5);
// }
// printf("%d\n", tab[counter]); //colocar dentro do while
