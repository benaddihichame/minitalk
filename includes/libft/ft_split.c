/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:45:38 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/18 20:36:38 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

static size_t	get_nb_words(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == (char)c)
			s++;
		if (!(*s))
			break ;
		++count;
		while (*s && *s != (char)c)
			s++;
	}
	return (count);
}

static char	*get_next_word(char **s, char c)
{
	char	*sptr;

	while (**s && **s == (char)c)
		(*s)++;
	if (!**s)
		return (NULL);
	sptr = *s;
	while (**s && **s != (char)c)
		(*s)++;
	return (ft_substr(sptr, 0, *s - sptr));
}

static void	free_split(char **tab, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		free(tab[i++]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	*ptr;
	char	**tab;
	size_t	i;
	size_t	tabsize;

	ptr = (char *)s;
	tabsize = get_nb_words((char *)s, c);
	tab = malloc(sizeof(char *) * (tabsize + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < tabsize)
	{
		tab[i] = get_next_word(&ptr, c);
		if (!(tab[i]))
		{
			free_split(tab, i);
			return (NULL);
		}
		++i;
	}
	tab[i] = NULL;
	return (tab);
}
