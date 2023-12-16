NAME = libftprintf.a

SRC = ft_printf_utils1.c ft_printf_utils2.c ft_printf.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	cc ${CFLAGS} -o $@ -c $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY: fclean clean re all
 
