##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## used for the my_rpg
##

SRCS	=	my_compute_power_rec.c		\
		my_compute_square_root.c		\
		my_find_prime_sup.c				\
		my_getnbr.c						\
		my_is_prime.c					\
		my_isneg.c						\
		my_put_nbr.c					\
		my_putchar.c					\
		my_putstr.c						\
		my_putstrerr.c					\
		my_revstr.c						\
		my_showmem.c					\
		my_showstr.c					\
		my_sort_int_array.c				\
		my_str_isalpha.c				\
		my_str_islower.c				\
		my_str_isnum.c					\
		my_str_isprintable.c			\
		my_str_isupper.c				\
		my_strcapitalize.c				\
		my_strcat.c						\
		my_strcmp.c						\
		my_strcpy.c						\
		my_strlen.c						\
		my_strlowcase.c					\
		my_strncat.c					\
		my_strncpy.c					\
		my_strstr.c						\
		my_strupcase.c					\
		my_swap.c						\
		my_char_isnum.c					\
		my_strdup.c

OBJS	=	$(SRCS:.c=.o)

LIB		=	-lmy

INCLUDE	=	-I../../include/

NAME	=	libmy.a

CFLAGS	=	$(INCLUDE)

all:		$(NAME)

$(NAME):	$(OBJS)
		cp my.h ../../include/
		ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(OBJS) $(NAME)

re:	fclean all
		