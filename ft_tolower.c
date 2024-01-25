/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:16:55 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/25 12:17:03 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
    if ('A' <= c && c <= 'Z')
        return (c + 32);
    return (c);
}
/*
int main() {
    char c = 'A';

    int lower_c = ft_tolower(c);

    printf("Original character: %c\n", c);
    printf("Lowercase character: %c\n", lower_c);

    return 0;
}*/