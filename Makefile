NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRC_FILES := ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
			ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: obj $(NAME)

obj: $(SRC_FILES)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc -c main.c
	gcc main.o -L. -lft

.PHONY: all clean fclean re libft.a