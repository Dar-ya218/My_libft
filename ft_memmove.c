/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:24:41 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/22 16:30:01 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst_ptr;
	const unsigned char *src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;

	if (dst == src)
		return (dst);

	if (dst < src)
	{
		while (len--)
			*dst-ptr++ = *src_ptr++;
	}
	else
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
			*(--dst_ptr) = *(--src_ptr);
	}
return (dst);
}
/*
int	main(void)
{
	char	dst[50];
	char	*src;

	src = "David drinks beer";
	ft_memmove(dst, src, 17);
	printf("After ft_memmove: %s\n", dst);
	return (0);
}*/
