/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:10:47 by yassine           #+#    #+#             */
/*   Updated: 2024/12/01 16:01:42 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *form, ...);
int formaspecifier(char c, va_list track);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
#endif
