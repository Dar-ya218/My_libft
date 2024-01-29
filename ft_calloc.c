/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:24:47 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/25 12:24:51 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = (void *)malloc(nmemb * size);
	if (result == NULL)
	{
		errno = ENOMEM;
		return ((void *)0);
	}
	else
	{
		ft_bzero(result, nmemb * size);
		return (result);
	}
}

/*int main() {
	size_t nmemb = 5;
	size_t size = 10;

	char *result = ft_calloc(nmemb, size);

	if (result) {
		printf("Allocated %ld bytes.\n", nmemb * size);
	} else {
		printf("Failed to allocate %ld bytes.\n", nmemb * size);
	}

	return 0;
}*/