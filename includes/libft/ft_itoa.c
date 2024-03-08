/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:48:35 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/17 19:39:26 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	count_size(long nb)
{
	size_t	i;

	i = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		i++;
	}
	if (nb == 0)
		i = 1;
	else
	{
		while (nb != 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	index;
	long	nb;
	char	*str;
	int		c;

	index = count_size((long) n);
	str = (char *) malloc(sizeof(char) * (index + 1));
	if (str == NULL)
		return (NULL);
	nb = (long) n;
	c = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
		c = 1;
	}
	str[index] = '\0';
	while (index > (size_t) c)
	{
		str[index - 1] = nb % 10 + '0';
		nb = nb / 10;
		index--;
	}
	return (str);
}
