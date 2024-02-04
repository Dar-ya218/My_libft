/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:40:36 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/02 11:59:43 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
//#include <unistd.h>

/*This function takes a string and a file descriptor, and writes the string */
/*to the given file descriptor.                                             */

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
int main() {
	ft_putstr_fd("Hello, World!\n", 1);
	return 0;
}*/
