/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_int_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:49:53 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 19:22:01 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	while (i < (size - 1))
	{
		while (j < (size - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
