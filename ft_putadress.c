/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:12:13 by yassine           #+#    #+#             */
/*   Updated: 2024/12/02 03:05:07 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n)
{
	int		count;
	char	*b16;

	count = 0;
	b16 = "0123456789abcdef";
	if (n < 16)
	{
		count += ft_putchar(b16[n]);
		return (count);
	}
	else
		count += ft_puthexa(n / 16);
	count += ft_puthexa(n % 16);
	return (count);
}

int	ft_putadress(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	count += ft_puthexa(n) + 2;
	return (count);
}
