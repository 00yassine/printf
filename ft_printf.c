/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:56:12 by yassine           #+#    #+#             */
/*   Updated: 2024/12/02 01:13:58 by yassine          ###   ########.fr       */
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
	else if (c == 'x' || c == 'X')
		count += ft_hexaput(va_arg(track, unsigned int), c);
	else if (c == 'p')
		count += ft_putadress(va_arg(track, unsigned long));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 'u')
		count += ft_unsputnbr(va_arg(track, unsigned int));
	return (count);
}

int	ft_printf(const char *form, ...)
{
	va_list track;
	int	i;
	int count;

	count = 0;
	i = 0;
	if (!form || write(1, 0, 0) == -1)
		return (-1);
	va_start(track, form);
	while (form[i] && count != -1)
	{
		if (form[i] == '%')
		{
			if(form[i + 1] == '\0')
				count = -1;
			else
				formaspecifier(form[i + 1], track);
			i++;
		}
		else
			count += ft_putchar(form[i]);
		i++;	
	}
	va_end(track);
	return (count);
}
int main()
{
	char *p;
	p = "yassine";
	ft_printf("%s %d %u %i %p %x %X %% \n",p ,78, -58, 96, p, 496559, 496559);
	printf("%s %d %u %i %p %x %X %%",p ,78, -58, 96, p, 496559, 496559);
}