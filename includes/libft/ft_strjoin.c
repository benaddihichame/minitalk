/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:34:17 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/14 21:01:49 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	h;
	char	*tmp;

	i = 0;
	h = 0;
	tmp = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (tmp == NULL)
		return (NULL);
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[h])
	{
		tmp[h + i] = s2[h];
		h++;
	}
	tmp[h + i] = '\0';
	return (tmp);
}
/*
int	main(void)
{
	const char *s1 = "hello";
	const char *s2 = "bananz";

	printf("%s\n",ft_strjoin(s1,s2));
}*/
