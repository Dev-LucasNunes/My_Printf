/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:51:28 by lgomes-n          #+#    #+#             */
/*   Updated: 2023/06/30 16:48:22 by lgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}	
	return (NULL);
}

int	ft_putchar(char c)
{
    write (1, &c, 1);
    return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
        write (1, "(null)", 6);
        return (6);
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
    return (i);
}

