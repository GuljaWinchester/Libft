# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/18 16:24:24 by gperedny          #+#    #+#              #
#    Updated: 2025/04/22 15:32:43 by gperedny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a
CC= cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_memcpy.c ft_bzero.c ft_memset.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_strncmp.c 
DEPS = libft.h
OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re