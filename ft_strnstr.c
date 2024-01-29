/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:22:52 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/29 12:37:41 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;
	size_t	elements;

	elements = ft_strlen(needle);
	if (elements == 0)
	{
		return ((char *)haystack);
	}

	len = elements;
	while (n >= len)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, len) == 0)
			{
				return ((char *)haystack);
			}
		}
		haystack++;
		n--;
	}
	return (NULL);
}