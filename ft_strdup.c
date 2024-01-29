/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:25:45 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/26 15:16:47 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	s_size;
	char	*dup;

	s_size = ft_strlen(s);
	dup = (char *)malloc(s_size + 1);
	if (dup == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	else
		return ((char *)ft_memcpy(dup, s, s_size +1));
}

/*int main() {
    const char *s = "Hello, World!";

    char *result = ft_strdup(s);

    printf("Original string: \"%s\"\n", s);
    printf("Duplicated string: \"%s\"\n", result);

    free(result);

    return 0;
}*/
