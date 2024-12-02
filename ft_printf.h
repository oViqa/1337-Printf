/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:01:44 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/30 12:07:10 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char c, int *i);
void	ft_putnbr(int nb, int *i);
void	putx(size_t n, int *i, char c);
void	ft_putstr(char *str, int *i);
int		ft_printf(const char *tata, ...);
void	putung(unsigned int n, int *i);
#endif