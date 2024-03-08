/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:10:51 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/14 18:50:12 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	alloc_len;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	alloc_len = 0;
	while (s[start + alloc_len] != '\0' && len--)
		alloc_len++;
	tmp = malloc((++alloc_len) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, s + start, alloc_len);
	return (tmp);
}
