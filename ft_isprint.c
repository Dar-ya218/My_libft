/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:21:29 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/15 15:22:18 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	if	(c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int x = ft_isprint(127);
	printf("%d\n", x);
	return(0);
}*/
