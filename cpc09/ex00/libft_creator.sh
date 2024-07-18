#! /bin/bash

SOURCES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJECTS="ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o"

cc -Wall -Werror -Wextra $SOURCES -c
ar -rcs libft.a $OBJECTS
rm -f $OBJECTS
