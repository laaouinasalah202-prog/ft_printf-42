/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-30 13:59:47 by slaaouin          #+#    #+#             */
/*   Updated: 2025-10-30 13:59:47 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"
#include <stdio.h>

static void	ft_convert(const char *str, int *c, va_list ap)
{
	if (*str == 'c')
		ft_putchar(va_arg(ap, int), c);
	if (*str == 's')
		ft_putstr(va_arg(ap, char *), c);
	if (*str == 'p')
		ft_putadresse(va_arg(ap, void *), c);
	if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(ap, int), c);
	if (*str == 'u')
		ft_putnbru(va_arg(ap, unsigned int), c);
	if (*str == 'x')
		ft_puthex(va_arg(ap, unsigned int), c, "0123456789abcdef");
	if (*str == 'X')
		ft_puthex(va_arg(ap, unsigned int), c, "0123456789ABCDEF");
	if (*str == '%')
		ft_putchar('%', c);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	p;

	if (!str)
		return (-1);
	va_start(p, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			ft_convert((str + 1), &len, p);
			if (!*str)
				break ;
			str += 1;
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	return (len);
}
