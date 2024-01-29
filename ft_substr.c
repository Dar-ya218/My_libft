/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:36:10 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/29 16:36:17 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	size_t	str_len;

	if (!str)
		return (NULL);
	sub_len = 0;
	str_len = ft_strlen(str);
	if (start < str_len)
	{
		if ((start + len) > str_len)
			sub_len = str_len - start;
		else
			sub_len = len;
	}
	sub = (char *)malloc(sub_len + 1);
	if (sub == NULL)
		return (NULL);
	sub = (char *)ft_memcpy(sub, (str + start), sub_len);
	*(sub + sub_len) = '\0';
	return (sub);
}

/*int main() {
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *result = ft_substr(s, start, len);

    printf("Original string: \"%s\"\n", s);
    printf("Substring: \"%s\"\n", result);

    free(result);  // Don't forget to free the memory!

    return 0;
}*/
