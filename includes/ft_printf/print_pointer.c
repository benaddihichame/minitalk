/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:53:25 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/30 20:00:01 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putlonghexa(unsigned long long nl)
{
	char	*hexabase;
	char	digit;
	int		res;

	res = 0;
	hexabase = "0123456789abcdef";
	if (nl >= 16)
		res += ft_putlonghexa((nl / 16));
	digit = hexabase[nl % 16];
	res += ft_putchar(digit);
	return (res);
}

int	print_pointer(unsigned long long p)
{
	int	res;

	if (p == 0)
		return (ft_putstr("(nil)"));
	res = ft_putstr("0x");
	res += ft_putlonghexa(p);
	return (res);
}
