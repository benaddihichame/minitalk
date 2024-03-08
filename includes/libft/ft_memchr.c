/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:26:29 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/08 14:52:20 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	bop;
	size_t			i;

	i = 0;
	str = (unsigned char *) s;
	bop = (unsigned char ) c;
	while (i < n)
	{
		if (str[i] == bop)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
