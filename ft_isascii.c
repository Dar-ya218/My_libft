/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:20:49 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/12 16:28:34 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
 if	( c >= 0 && c <= 127)
	return  (1);
 else
	 return (0);
}

/*int main()
{
	int c = ft_isascii(128);
	printf("%d", c);
}*/

	
