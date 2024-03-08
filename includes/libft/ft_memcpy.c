/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:23:12 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/06 12:32:29 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == NULL && src == NULL)
		return (dst);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (n > 0)
	{
		*tmp_dst = *tmp_src;
		tmp_dst++;
		tmp_src++;
		n--;
	}
	return (dst);
}
/*int	main()
{
    char	tmp_dst[] = "";
    char	tmp_src[] = "Hello banane";
    ft_memcpy(tmp_dst, tmp_src, 8);
    printf("%s", tmp_dst);
    return 0;
}*/
