/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:44:36 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/06 21:58:06 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write (1, &pos, 1);
	}
	else if (n < 0)
	{
		write (1, &neg, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-8);
// 	ft_is_negative(8);
// 	ft_is_negative(0);
// 	ft_is_negative(90);
// }
