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
#include "ft_printf.h"

static void	ft_convert(const char *str, int *c, va_list ap)
{
	if (*str == 'c')
		ft_putchar(va_arg(ap, int), c);
	else if (*str == 's')
		ft_putstr(va_arg(ap, char *), c);
	else if (*str == 'p')
		ft_putadresse(va_arg(ap, void *), c);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(ap, int), c);
	else if (*str == 'u')
		ft_putnbru(va_arg(ap, unsigned int), c);
	else if (*str == 'x')
		ft_puthex(va_arg(ap, unsigned int), c, "0123456789abcdef");
	else if (*str == 'X')
		ft_puthex(va_arg(ap, unsigned int), c, "0123456789ABCDEF");
	else if (*str == '%')
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
		if (*str == '%' && *(str + 1))
		{
			ft_convert((++str), &len, p);
			if (*str == '\0')
				return (len);
		}
		else if (*str != '%')
			ft_putchar(*str, &len);
		str++;
	}
	va_end(p);
	return (len);
}
