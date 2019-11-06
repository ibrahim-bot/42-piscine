/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:39:16 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 19:11:59 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
