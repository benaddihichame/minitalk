/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:38:27 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/11/10 22:18:43 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
    // Chaîne de caractères à dupliquer
    const char *source = "Hello, World!";

    // Appel de la fonction strdup pour dupliquer la chaîne
    char *duplicate = strdup(source);

    // Vérification si la duplication a réussi
    if (duplicate)
    {
        // Affichage de la chaîne originale et de sa copie
        printf("Original: %s\n", source);
        printf("Duplicate: %s\n", duplicate);

        // Libération de la mémoire allouée pour la copie
        free(duplicate);
    }
    else
    {
        // Affichage en cas d'échec de l'allocation mémoire
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
