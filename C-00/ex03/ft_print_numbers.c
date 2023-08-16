/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:40:37 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/02 19:43:57 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		write (1, &d, 1);
		d++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }
