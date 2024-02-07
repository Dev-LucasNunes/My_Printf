/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:39:04 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/07/04 19:18:22 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	count_hex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*hex_to_str(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = count_hex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	put_address(void *nbr, char *base)
{
	int				len;
	char			*str;
	unsigned long	n;

	if (!nbr)
		return (ft_putstr ("(nil)"));
	else
		ft_putstr("0x");
	n = (unsigned long)nbr;
	str = hex_to_str(n, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}