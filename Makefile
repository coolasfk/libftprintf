# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 13:43:01 by eprzybyl          #+#    #+#              #
#    Updated: 2023/11/15 21:00:27 by eprzybyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

HEADER = headers/ft_printf.h

RM = rm -f

AR = ar rcs

SRC := $(wildcard src/*.c)

OBJ = $(SRC:src/%.c=obj/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

obj/%.o: src/%.c $(HEADER)
	@mkdir -p obj
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) -r obj $(NAME)

fclean: clean

re: fclean all
