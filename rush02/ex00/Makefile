# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/23 19:23:30 by jbalayan          #+#    #+#              #
#    Updated: 2026/05/23 19:23:33 by jbalayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = 02_validation.c 03_file_reader.c 04_parsing.c 06_dictionary.c \
07_dictionary_lookup.c 08_convert_units.c 09_converts_tens.c \
10_convert_hundreds.c 11_convert_large.c 12_output.c \
13_utils.c 14_free_memory.c main.c

OBJ = $(SRC:.c=.o)

HEADER = rush02.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
