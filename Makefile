# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 11:37:30 by dabochko          #+#    #+#              #
#    Updated: 2024/02/01 11:36:33 by dabochko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcat.c \
ft_strlen.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c \
ft_strlcpy.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c\
ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 
	
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c Makefile libft.h
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
