/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:38:09 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/30 10:50:39 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	if (str == NULL)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, count);
		str++;
	}
}
// int main()
// {
// 	int i = 0;
// 	ft_putstr("Hello World", &i);
// }