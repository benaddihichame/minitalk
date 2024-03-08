/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:28:35 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/10 19:00:30 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;	

	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, size * nmemb);
	return (tmp);
}
