/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:53:16 by lgomes-n          #+#    #+#             */
/*   Updated: 2024/02/06 22:40:39 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	print_args(const char *format, int i, va_list arg);
int	ft_putstr(char *s);
char	*ft_strchr(const char *s, int c);


int ft_printf(const char *format, ...)
{
    va_list arg;
	int		i;
	int		control;
	
	i = 0;
	control = 0;
	
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			control += print_args(format, i, arg);
			i++;
		}	
		else
		{
			control += ft_putchar(format[i]);
		}
		i++;
	
	}
	va_end(arg);
	return (control);
}

int	print_args(const char *format, int i, va_list arg)
{
	if (format[i + 1] == '%')
		return (ft_putchar (format [i + 1]));
	else if (format[i + 1] == 'c')
		return (ft_putchar (va_arg(arg, int)));
	else if (format [i + 1] == 's')
		return (ft_putstr (va_arg(arg, char *)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_putnbr_mod (va_arg (arg, int)));
	else if (format[i + 1] == 'u')
		return (ft_putnbr_u (va_arg(arg, unsigned int)));
	else if (format[i +1] == 'X' || format[i + 1] == 'x')
	{
		if (format[i + 1] == 'X')
			return (put_hex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
		else
			return (put_hex(va_arg(arg, unsigned int), "0123456789abcdef"));
	}
	else if (format[i + 1] == 'p')
		return (put_address(va_arg(arg, void *), "0123456789abcdef"));
	return (0);
}














