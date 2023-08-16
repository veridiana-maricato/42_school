/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguimara <vguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:06:41 by vguimara          #+#    #+#             */
/*   Updated: 2023/06/06 22:11:21 by vguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int t1;
	int t2;
	int	*pn_div;
	int	*pn_mod;

	t1 = 11;
	t2 = 10;

	ft_div_mod(t1, t2, *pn_div, *pn_mod);
}