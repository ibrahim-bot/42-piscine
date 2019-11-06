/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 17:59:44 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/01 22:04:59 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		error(int n)
{
	if (n >= 10 || n <= 0)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int *tab, int n)
{
	int i;

	i = 0;
	while (++i < n)
		if (tab[i - 1] >= tab[i])
			return ;
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
	if (tab[0] < (10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int i;
	int tab[10];

	if ((i = error(n)) == 1)
		return ;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (tab[0] <= (10 - n))
	{
		display(tab, n);
		tab[n - 1]++;
		i = n;
		while (i > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
