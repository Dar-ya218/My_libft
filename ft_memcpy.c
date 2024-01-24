/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:24:09 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/23 13:30:49 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
/*
int main() {
    char src[50] = "Hello World!";
    char dest[50];

    ft_memcpy(dest, src, 50);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/