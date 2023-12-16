# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamir <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 15:55:15 by mamir             #+#    #+#              #
#    Updated: 2023/12/07 12:25:13 by mamir            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf_utils1.c ft_printf_utils2.c ft_printf.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $<
	ar rcs $(NAME) $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY: fclean clean re all
 
