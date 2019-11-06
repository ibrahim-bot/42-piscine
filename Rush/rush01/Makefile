# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/08/11 16:20:54 by ichougra     #+#   ##    ##    #+#        #
#    Updated: 2019/08/11 16:57:04 by ichougra    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

CC		=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra

NAME	=	rush-01

SRC		=	ft_libc.c\
			main.c\
			tab.c\
			tab2.c\
			init_val.c\

OBJ		= $(SRC:.c=.o)

RM		=	rm -rf

all: $(NAME) clean

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all fclean clean re
