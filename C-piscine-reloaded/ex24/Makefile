# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecosta <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 11:26:36 by jecosta           #+#    #+#              #
#    Updated: 2024/10/18 15:24:23 by jecosta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -c
HEADERS = ./includes/
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(SRCS:.C = .O)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -I $(HEADERS)
	ar -rc $(NAME) $(OBJS)

clean: 
	rm -rf *.o

fclean: clean
	rm $(NAME)

re: fclean all
