/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:47:41 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/07/04 18:47:47 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *format, ...);
int	print_args(const char *format, int i, va_list arg);
int	    ft_putchar(char c);
int	    ft_putstr(char *s);
int	ft_putnbr_mod(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
int	ft_putnbr_u(unsigned int nbr);
int	put_hex(unsigned int nbr, char *base);
int	put_address(void *nbr, char *base);
int print_args_hex (const char *format, int i, va_list arg);

#endif