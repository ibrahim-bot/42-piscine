/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 11:46:33 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 12:19:12 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	int tmp;

	if (min >= max)
		return (NULL);
	i = 0;
	tmp = min;
	while (tmp != max)
	{
		tmp++;
		i++;
	}
	tab = malloc(sizeof(int) * (i + 1));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	return (tab);
}
