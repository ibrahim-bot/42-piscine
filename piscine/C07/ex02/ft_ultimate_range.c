/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 12:23:32 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 16:52:32 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	int				*tab;
	int				tmp;

	*range = NULL;
	if (min >= max)
		return (0);
	i = 0;
	tmp = min;
	while (tmp != max)
	{
		tmp++;
		i++;
	}
	if ((tab = malloc(sizeof(int) * (i + 1))) == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
