/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:41:58 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/15 21:39:49 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		n++;
		str ++;
	}	
	return (n);
}

// #include <unistd.h>
// int	main(void)
// {
// 	char *s;
// 	int t;

// 	s = "Ola mundo";
// 	t = ft_strlen(s);

// 	printf("%d", t);
// }