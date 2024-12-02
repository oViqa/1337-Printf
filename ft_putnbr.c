/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:40:28 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/30 12:18:15 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *i)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", i);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', i);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, i);
		ft_putnbr(nb % 10, i);
	}
	else
	{
		ft_putchar(nb + '0', i);
	}
	return ;
}
