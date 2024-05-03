NAME = libftprintf.a

SRC = ft_printf_utils1.c ft_printf_utils2.c ft_printf.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

all: header $(NAME)

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


BLUE = \033[0;34m;
NC = \033[0m;
header:

	@echo "$(BLUE)"
	
	@echo "███████╗████████╗     ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗"
	@echo "██╔════╝╚══██╔══╝     ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝"
	@echo "█████╗     ██║        ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗  "
	@echo "██╔══╝     ██║        ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝  "
	@echo "██║        ██║███████╗██║     ██║  ██║██║██║ ╚████║   ██║   ██║     "
	@echo "╚═╝        ╚═╝╚══════╝╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝     "

	@echo "$(NC)"