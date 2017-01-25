CC=gcc

CFLAGS=-W -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c srcs/fr_strcmp.c

NAME=libft.a

HEADER_DIR = includes

all= $(NAME)

$(NAME):
		$(CC) $(CLAFGS) $(SRC) $(HEADER_DIR)
		ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o
		ranlib $(NAME)
	
clean:

		/bin/rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	
fclean: clean
		/bin/rm -f $(NAME)
