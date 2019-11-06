/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 11:03:36 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 17:20:02 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int num1, int num2)
{
	char c1;
	char c2;

	c1 = num1 + '0';
	c2 = num2 + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
}

int		return_units(int n)
{
	return (n % 10);
}

int		return_tens(int n)
{
	return (n / 10);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(return_tens(i), return_units(i));
			write(1, " ", 1);
			ft_putchar(return_tens(j), return_units(j));
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
