/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:01:55 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/30 12:18:08 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format(va_list ap, const char *format)
{
	int	alien;

	alien = 0;
	if (*format == 'c')
		ft_putchar(va_arg(ap, int), &alien);
	else if (*format == 's')
		ft_putstr(va_arg(ap, char *), &alien);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(ap, int), &alien);
	else if (*format == 'x' || *format == 'X')
		putx(va_arg(ap, unsigned int), &alien, *format);
	else if (*format == 'p')
	{
		ft_putstr("0x", &alien);
		putx((va_arg(ap, size_t)), &alien, 'x');
	}
	else if (*format == 'u')
		putung(va_arg(ap, unsigned int), &alien);
	else
		ft_putchar(*format, &alien);
	return (alien);
}

int	ft_printf(const char *tata, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (write(1, NULL, 0) == -1)
		return (-1);
	va_start(args, tata);
	while (*tata)
	{
		if (*tata == '%' && *(tata + 1))
		{
			tata++;
			if (*tata == '%')
				ft_putchar('%', &count);
			else
				count += format(args, tata);
		}
		else
			ft_putchar(*tata, &count);
		tata++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	fclose(stdout);
// 	dprintf(2, "mine : %d\t", ft_printf("\001\002\007\v\010\f\r\n"));
// 	dprintf(2, "homa : %d\n", printf("\001\002\007\v\010\f\r\n"));
// ft_printf("%");
// }