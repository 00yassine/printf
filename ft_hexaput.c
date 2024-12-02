/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:41:02 by ykabili-          #+#    #+#             */
/*   Updated: 2024/12/02 03:02:04 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaput(unsigned int n, char c)
{
	int		count;
	char	*b16;

	count = 0;
	if (c == 'x')
		b16 = "0123456789abcdef";
	else
		b16 = "0123456789ABCDEF";
	if (n < 16)
	{
		count += ft_putchar(b16[n]);
		return (count);
	}
	else
		count += ft_hexaput(n / 16, c);
	count += ft_hexaput(n % 16, c);
	return (count);
}
