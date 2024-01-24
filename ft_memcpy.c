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

char	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*src;

	i = 0;
	dest = (char *)dest;
	src = (char *)src;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}