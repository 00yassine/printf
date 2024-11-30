/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <ykabili-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:19:34 by ykabili-          #+#    #+#             */
/*   Updated: 2024/11/29 15:23:18 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nbr;
	int		i;

	i = 1;
	nbr = n;
	if (n < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
		i++;
	}
	if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
		nbr %= 10;
	}
	if (nbr <= 9)
	{
		ft_putchar(nbr + '0');
	}
	return (i);
}
