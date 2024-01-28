# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 11:37:30 by dabochko          #+#    #+#              #
#    Updated: 2024/01/23 12:20:24 by dabochko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcat.c \
ft_strlen.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c \
ft_strlcpy.c

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