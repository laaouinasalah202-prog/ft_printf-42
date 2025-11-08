/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-31 09:48:50 by slaaouin          #+#    #+#             */
/*   Updated: 2025-10-31 09:48:50 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putstr(const char *s, int *c);
void	ft_putchar(int s, int *c);
void	ft_puthex(unsigned long l, int *c, char *base);
void	ft_putnbru(unsigned int n, int *c);
void	ft_putnbr(long n, int *c);
void	ft_putadresse(void *s, int *c);
int		ft_printf(const char *str, ...);

#endif
