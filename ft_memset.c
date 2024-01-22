/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:23:05 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/22 14:05:21 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*memory_ptr;
	unsigned char	value;
	size_t			i;

	i = 0;
	memory_ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (i < len)
	{
		memory_ptr[i] = value;
		i++;
	}
	return (b);
}
/*
int main(void)
{
	char b[] = "Mundo";
	char *res;

	printf("string: %s\n", b);
	res = ft_memset(b, 42, 3);
	printf("mio_memset: %s\n", res);
	return (0);
}*/
