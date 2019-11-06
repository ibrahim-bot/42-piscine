/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_val.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:44:40 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 23:21:32 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_my.h"

void	init_valup(char *str, int *val_up, int *val_down)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j != 4)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			val_up[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	j = 0;
	while (j != 4)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			val_down[j] = str[i] - '0';
			j++;
		}
		i++;
	}
}

void	init_vallef(char *str, int *val_left, int *val_right)
{
	int i;
	int j;

	i = 16;
	j = 0;
	while (j != 4)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			val_left[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	j = 0;
	while (j != 4)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			val_right[j] = str[i] - '0';
			j++;
		}
		i++;
	}
}

void	modif_tabrig(int tab[LI][COL], int *val_right, int *val_left)
{
	int i;
	int j;
	int x;

	i = -1;
	j = 1;
	x = 3;
	while (i++ < 3)
	{
		if (val_right[i] == 1)
			tab[i][3] = 4;
		if (val_right[i] == 3 && val_left[i] == 2)
			tab[i][1] = 4;
		if (val_right[i] == 4)
		{
			while (j != 5)
			{
				tab[i][x] = j;
				j++;
				x--;
			}
		}
		j = 1;
		x = 3;
	}
}

void	modif_tabrig2(int tab[LI][COL], int *val_right, int *val_left)
{
	int i;

	i = -1;
	while (i++ < 3)
	{
		if (val_right[i] == 2 && val_left[i] == 1)
			tab[i][3] = 3;
	}
}

void	modif_tab2(int tab[LI][COL], int *val_left, int *val_right)
{
	modif_tablef(tab, val_left, val_right);
	modif_tablef2(tab, val_left, val_right);
	modif_tabrig(tab, val_right, val_left);
	modif_tabrig2(tab, val_right, val_left);
}
