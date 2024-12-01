/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:56:12 by yassine           #+#    #+#             */
/*   Updated: 2024/12/01 16:09:11 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int formaspecifier(char c, va_list track)
{
	int count;
	count = 0;
	if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(track, int));
	else if (c == 'c')
		count += ft_putchar(va_arg(track, int));
	else if (c == 's')
		count += ft_putstr(va_arg(track, char *));
	// else if (c == 'x' || c == 'X')
	// 	count += ft_hexaput(va_arg(track, int), c);
	// else if (c == 'p')
	// 	count += ft_putnbr(va_arg(track, int));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *form, ...)
{
	va_list track;
	int	i;
	int count;

	count = 0;
	i = 0;
	va_start(track, form);
	while (form[i])
	{
		if (form[i] == '%' && form[i+1] != '\0')
			formaspecifier(form[i+1], track);
		i++;	
	}
	va_end(track);
	return (count);
}
