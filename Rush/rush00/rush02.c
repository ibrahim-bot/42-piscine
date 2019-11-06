/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush02.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 14:04:25 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 16:05:22 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	display_x(int x)
{
	int i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('A');
		return ;
	}
	ft_putchar('A');
	while (i != (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
}

void	display_y(int y, int x)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (y == 1)
	{
		ft_putchar('\n');
		return ;
	}
	while (i < (y - 2))
	{
		ft_putchar('\n');
		ft_putchar('B');
		while (j < (x - 2))
		{
			ft_putchar(' ');
			j++;
			if (j == (x - 2))
				ft_putchar('B');
		}
		i++;
		j = 0;
	}
	ft_putchar('\n');
}

void	last_display(int x)
{
	int i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
		return ;
	}
	ft_putchar('C');
	while (i != (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int cmpt;

	cmpt = 0;
	display_x(x);
	display_y(y, x);
	if (y >= 2)
		last_display(x);
}
