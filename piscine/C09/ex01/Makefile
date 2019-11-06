# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/08/11 16:20:54 by ichougra     #+#   ##    ##    #+#        #
#    Updated: 2019/08/22 19:49:04 by ichougra    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

LFLAGS	=	-I includes

NAME	=	libft.a

SRCS	=	./srcs/ft_putchar.c \
			./srcs/ft_swap.c \
			./srcs/ft_putstr.c \
			./srcs/ft_strlen.c \
			./srcs/ft_strcmp.c

OBJ		=	$(SRCS:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
