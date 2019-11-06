/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tab2.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 23:09:48 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 23:10:12 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_my.h"

void	modif_tabup2(int tab[LI][COL], int *val_up, int *val_down)
{
	int i;

	i = -1;
	while (i++ < 3)
	{
		if (val_up[i] == 2 && val_down[i] == 1)
			tab[0][i] = 3;
	}
}

void	modif_tabdown2(int tab[LI][COL], int *val_down, int *val_up)
{
	int i;

	i = -1;
	while (i++ < 3)
	{
		if (val_down[i] == 2 && val_up[i] == 1)
			tab[3][i] = 3;
	}
}

void	modif_tablef2(int tab[LI][COL], int *val_left, int *val_right)
{
	int i;

	i = -1;
	while (i++ < 3)
	{
		if (val_left[i] == 2 && val_right[i] == 1)
			tab[i][0] = 3;
	}
}
