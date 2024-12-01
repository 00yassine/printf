/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykabili- <ykabili-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:10:47 by yassine           #+#    #+#             */
/*   Updated: 2024/12/01 12:31:19 by ykabili-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *form, ...);
int formaspecifier(char c, va_list track);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
#endif
