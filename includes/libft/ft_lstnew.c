/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:45:02 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/19 23:46:22 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*kb9;

	kb9 = malloc(sizeof(t_list));
	if (!kb9)
		return (NULL);
	kb9->content = content;
	kb9->next = NULL;
	return (kb9);
}
