/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:37:29 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/28 12:27:12 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putx(size_t n, int *i, char c)
{
	if (n >= 16)
	{
		putx(n / 16, i, c);
		putx(n % 16, i, c);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0', i);
		else if (c == 'x')
			ft_putchar(n - 10 + 'a', i);
		else
			ft_putchar(n - 10 + 'A', i);
	}
	return ;
}
