# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    libft_creator.sh                                 .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/08/14 11:27:03 by ichougra     #+#   ##    ##    #+#        #
#    Updated: 2019/08/15 12:14:46 by ichougra    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#!/bin/sh

gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a *.o
rm *.o
