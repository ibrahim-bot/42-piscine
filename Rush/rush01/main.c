/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 12:39:16 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 23:22:07 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_my.h"
#include <stdio.h>

int		error(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[j])
	{
		if (str[j] >= '1' && str[j] <= '4')
		{
			i++;
		}
		if (str[j] >= '5' && str[j] <= '9')
			return (0);
		j++;
	}
	return (i);
}

int		test_value(int *val_up, int *val_down)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (val_up[i] == 4 && val_down[i] != 1)
			return (1);
		if (val_up[i] == 1 && val_down[i] == 1)
			return (1);
		if ((val_up[i] == 3 && val_down[i] == 3) ||
				(val_down[i] == 4 && val_up[i] == 3))
			return (1);
		if (val_up[i] == 2 && val_down[i] == 4)
			return (1);
		if ((val_up[i] == 4 && val_up[i + 1] == 4) ||
				(val_up[i] == 4 && val_up[i + 2] == 4) ||
				(val_up[i] == 4 && val_up[i + 3] == 4))
			return (1);
		i++;
	}
	return (0);
}

int		test_value2(int *val_left, int *val_right)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (val_left[i] == 4 && val_right[i] != 1)
			return (1);
		if (val_left[i] == 1 && val_right[i] == 1)
			return (1);
		if ((val_left[i] == 3 && val_right[i] == 3) ||
				(val_right[i] == 4 && val_left[i] == 3))
			return (1);
		if (val_left[i] == 2 && val_right[i] == 4)
			return (1);
		if ((val_left[i] == 4 && val_left[i + 1] == 4) ||
				(val_left[i] == 4 && val_left[i + 2] == 4) ||
				(val_left[i] == 4 && val_left[i + 3] == 4))
			return (1);
		i++;
	}
	return (0);
}

void	modif_tab(int tab[LI][COL], int *val_up, int *val_down)
{
	modif_tabup(tab, val_up, val_down);
	modif_tabup2(tab, val_up, val_down);
	modif_tabdown(tab, val_down, val_up);
	modif_tabdown2(tab, val_down, val_up);
}

int		main(int ac, char **av)
{
	int tab[LI][COL];
	int val_up[LI];
	int val_down[LI];
	int val_left[COL];
	int val_right[COL];

	if (ac != 2 || error(av[1]) != VAL)
	{
		ft_putstr("error\n");
		return (0);
	}
	init_valup(av[1], val_up, val_down);
	init_vallef(av[1], val_left, val_right);
	if (test_value(val_up, val_down) == 1 ||
			test_value2(val_left, val_right) == 1)
	{
		ft_putstr("error\n");
		return (0);
	}
	init_tab(tab);
	modif_tab(tab, val_up, val_down);
	modif_tab2(tab, val_left, val_right);
	print_tab(tab);
	return (0);
}
