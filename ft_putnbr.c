/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-31 15:19:20 by slaaouin          #+#    #+#             */
/*   Updated: 2025-10-31 15:19:20 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(long n, int *c)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-', c);
		number *= -1;
	}
	if (number > 9)
	{
		ft_putnbr(number / 10, &(*c));
		ft_putchar(number % 10 + '0', &(*c));
	}
	else
		ft_putchar(number % 10 + '0', &(*c));
}
