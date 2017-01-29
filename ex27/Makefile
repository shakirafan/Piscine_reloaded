
NAME = ft_display_file

CC = gcc

SRC = ft_display_file.c

OBJ = ft_display_file.o

FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
