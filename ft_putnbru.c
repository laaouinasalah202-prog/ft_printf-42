/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrU.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-11-02 08:51:15 by slaaouin          #+#    #+#             */
/*   Updated: 2025-11-02 08:51:15 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static char	*ft_getnmber(unsigned int nb, unsigned int *l)
{
	char	*res;
	int		len;

	len = 0;
	if (nb == 0)
		return (NULL);
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	*l = len;
	res = malloc((sizeof(char) * len) + 1);
	if (!res)
		return (NULL);
	return (res);
}

void	ft_putnbru(unsigned int n, int *c)
{
	char			*number;
	unsigned int	nblen;

	if (n == 0)
	{
		ft_putchar('0', c);
		return ;
	}
	nblen = 0;
	number = ft_getnmber(n, &nblen);
	number[nblen] = '\0';
	while (nblen-- > 0)
	{
		number[nblen] = (n % 10) + '0';
		n /= 10;
	}
	ft_putstr(number, c);
	free(number);
}
