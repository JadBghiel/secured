##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile with the folling rules: re, clean and fclean rules
##

CC = gcc

SRC = src/function.c \
    src/table.c \
    src/handling/delete.c \
    src/handling/dump.c \
    src/handling/insert.c \
    src/handling/search.c \
    src/lib/my_atoi.c \
    src/lib/my_atol.c \
    src/lib/my_calloc.c \
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

NAME = libhashtable.a
INCLUDE_PATH = ./include/
LDFLAGS = -I$(INCLUDE_PATH)
CFLAGS = -Wall -g

all:	$(NAME)

$(NAME): libhashtable.a $(OBJ)
	ar	-rc $(NAME)	$(OBJ)

%.o: %.c
	$(CC)	$(CFLAGS)   -c	$<	-o	$@ $(LDFLAGS)

clean:
	rm	-f	$(OBJ)

fclean: clean
	rm	-f	$(NAME)

re: fclean all

.PHONY: all clean fclean re
