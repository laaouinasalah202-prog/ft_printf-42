/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-01 11:14:47 by slaaouin          #+#    #+#             */
/*   Updated: 2025-11-01 11:14:47 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_puthex(unsigned long l, int *c, char *base)
{
	if (l >= 16)
		ft_puthex(l / 16, c, base);
	ft_putchar(base[l % 16], &(*c));
}
