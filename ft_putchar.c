/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:19:01 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/28 12:28:55 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putchar(char c, int *i)
{
	write(1, &c, 1);
	(*i)++;
}

// int main()
// {
// 	va_lis
// 	int  i = 0;

// 	ft_putchar(va_arg(list , int), &i);
// }