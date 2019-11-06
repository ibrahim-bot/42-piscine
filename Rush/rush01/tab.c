/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tab.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:08:31 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 23:00:10 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_my.h"

void	init_tab(int tab[LI][COL])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < LI)
	{
		while (y < COL)
		{
			tab[x][y] = 0;
			y++;
		}
		y = 0;
		x++;
	}
}

void	print_tab(int tab[LI][COL])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < LI)
	{
		while (y < COL)
		{
			ft_putnbr(tab[x][y]);
			ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
	}
}

void	modif_tabup(int tab[LI][COL], int *val_up, int *val_down)
{
	int i;
	int j;
	int x;

	i = -1;
	j = 1;
	x = 0;
	while (i++ < 3)
	{
		if (val_up[i] == 1)
			tab[0][i] = 4;
		if (val_up[i] == 3 && val_down[i] == 2)
			tab[2][i] = 4;
		if (val_up[i] == 4)
		{
			while (j != 5)
			{
				tab[x][i] = j;
				j++;
				x++;
			}
		}
		x = 0;
		j = 1;
	}
}

void	modif_tabdown(int tab[LI][COL], int *val_down, int *val_up)
{
	int i;
	int j;
	int x;

	i = -1;
	j = 1;
	x = 3;
	while (i++ < 3)
	{
		if (val_down[i] == 1)
			tab[3][i] = 4;
		if (val_down[i] == 3 && val_up[i] == 2)
			tab[1][i] = 4;
		if (val_down[i] == 4)
		{
			while (j != 5)
			{
				tab[x][i] = j;
				j++;
				x--;
			}
		}
		j = 1;
		x = 3;
	}
}

void	modif_tablef(int tab[LI][COL], int *val_left, int *val_right)
{
	int i;
	int j;
	int x;

	i = -1;
	j = 1;
	x = 0;
	while (i++ < 3)
	{
		if (val_left[i] == 1)
			tab[i][0] = 4;
		if (val_left[i] == 3 && val_right[i])
			tab[i][2] = 4;
		if (val_left[i] == 4)
		{
			while (j != 5)
			{
				tab[i][x] = j;
				j++;
				x++;
			}
		}
		j = 1;
		x = 0;
	}
}
