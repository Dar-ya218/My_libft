/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:39:33 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/29 16:39:39 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	ft_count_digits(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n >= 10)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

char			*ft_itoa(int n)
{
	size_t	n_len;
	char	*t;
	size_t	i;

	n_len = ft_count_digits(n);
	t = (char *)malloc(n_len + 1);
	if (t)
	{
		t[n_len] = '\0';
		i = 0;
		if (n < 0)
		{
			t[i] = '-';
			i++;
			n = -n;
		}
		while (i < n_len)
		{
			t[n_len - i - 1] = (n % 10) + '0';
			n = n / 10;
			i++;
		}
	}
	return (t);
}

/*
int main() {
	int n = -2147483648;

	char *result = ft_itoa(n);

	printf("Number: %d\n", n);
	printf("String: \"%s\"\n", result);

	free(result);

	return 0;
}*/
