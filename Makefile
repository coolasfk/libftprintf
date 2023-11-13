# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 13:43:01 by eprzybyl          #+#    #+#              #
#    Updated: 2023/11/13 14:29:39 by eprzybyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

HEADER = headers/libftprintf.h

SRC := $(wildcard *.c)

RM = rm -f

AR = ar rcs

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean: $(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all