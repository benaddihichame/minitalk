/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:39:32 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/21 15:40:09 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *neew)
{
	t_list	*last;

	last = ft_lstlast(*alst);
	if (!last)
	{
		*alst = neew;
		return ;
	}
	last->next = neew;
}
