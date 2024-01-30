/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:38:10 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/29 16:38:22 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[i] != c && s[i] != '\0')
		count++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char		**ft_free(char **t, size_t i)
{
	while (i > 0)
	{
		i--;
		free(t[i]);
	}
	free(t);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**t;

	if (!s)
		return (NULL);
	t = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!t)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_count_words(s, c))
	{
		while (s[j] == c)
			j++;
		t[i] = (char *)malloc(sizeof(char) * (ft_word_len(&s[j], c) + 1));
		if (!t[i])
			return (ft_free(t, i));
		k = 0;
		while (s[j] != c && s[j] != '\0')
			t[i][k++] = s[j++];
		t[i++][k] = '\0';
	}
	t[i] = NULL;
	return (t);
}

/*int main() {
	const char *s = "Hello, World!";
	char c = ' ';

	char **result = ft_split(s, c);

	if (result) {
		printf("String: \"%s\"\n", s);
		printf("Split by: '%c'\n", c);
		printf("Result:\n");
		for (int i = 0; result[i] != NULL; i++) {
			printf("  \"%s\"\n", result[i]);
			free(result[i]);  // Don't forget to free the memory!
		}
		free(result);
	} else {
		printf("Failed to allocate memory.\n");
	}

	return 0;
}*/
