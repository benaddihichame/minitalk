/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:15:36 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/16 19:21:38 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
