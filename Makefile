##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile with the folling rules: re, clean and fclean rules
##

CC = gcc

SRC = src/main.c \
    src/function.c \
    src/handling.c \
    src/table.c \
    src/lib/my_atoi.c \
    src/lib/my_atol.c \
    src/lib/my_isdigit.c \
    src/lib/my_isspace.c \
    src/lib/my_memcpy.c \
    src/lib/my_put_error.c \
    src/lib/my_putchar.c \
    src/lib/my_putstr.c \
    src/lib/my_realloc.c \
    src/lib/my_strcmp.c \
    src/lib/my_strcpy.c \
    src/lib/my_strdup.c \
    src/lib/my_strlen.c \
    src/lib/my_strtok.c \

OBJ = $(SRC:.c=.o)

NAME = a.out

LDFLAGS = -g
CPPFLAGS = -Iinclude

%.o: %.c
	$(CC)	$(CPPFLAGS)	-c	$<	-o	$@

$(NAME): $(OBJ)
	ar	rcs	$(NAME)	$(OBJ)

all:	$(NAME)

clean:
	rm	-f	$(OBJ)

fclean: clean
	rm	-f	$(NAME)

re: fclean all

.PHONY: all clean fclean re
