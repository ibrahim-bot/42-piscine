/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/31 19:29:40 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/02 14:01:29 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	display(char i, char x, char y)
{
	write(1, &i, 1);
	write(1, &x, 1);
	write(1, &y, 1);
	if (i != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char i;
	char x;
	char y;

	i = '0';
	while (i <= '7')
	{
		x = i + 1;
		while (x <= '8')
		{
			y = x + 1;
			while (y <= '9')
			{
				display(i, x, y);
				y++;
			}
			x++;
		}
		i++;
	}
}
