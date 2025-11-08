/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadresse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-31 14:18:23 by slaaouin          #+#    #+#             */
/*   Updated: 2025-10-31 14:18:23 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putadresse(void *s, int *c)
{
	unsigned long	l;

	if (!s)
	{
		ft_putstr("(nil)", c);
		c++;
		return ;
	}
	l = (unsigned long)s;
	ft_putstr("0x", c);
	ft_puthex(l, c, "0123456789abcdef");
}
