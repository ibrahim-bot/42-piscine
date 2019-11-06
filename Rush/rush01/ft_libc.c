/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_libc.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 15:41:42 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 21:35:02 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_my.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		abs_value(int number)
{
	if (number < 0)
		return (number * (-1));
	else
		return (number);
}

void	ft_putnbr(int nb)
{
	int		count;
	int		digit;
	char	int_to_char;
	int		non_null_bool;

	non_null_bool = 0;
	count = 1000000000;
	if (nb < 0)
		write(1, "-", 1);
	if (nb == 0)
		write(1, "0", 1);
	while (count != 0)
	{
		digit = (nb / count) % 10;
		if (digit != 0)
			non_null_bool = 1;
		if (digit != 0 || non_null_bool != 0)
		{
			int_to_char = abs_value(digit) + '0';
			write(1, &int_to_char, 1);
		}
		count /= 10;
	}
}
