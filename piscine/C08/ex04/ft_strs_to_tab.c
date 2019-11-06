/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strs_to_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 13:42:21 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 12:19:14 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

char				*ft_strdup(char *src)
{
	int			i;
	char		*dest;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*new;

	new = malloc(sizeof(t_stock_str) * (ac + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		new[i].size = j;
		new[i].str = av[i];
		new[i].copy = ft_strdup(av[i]);
		i++;
	}
	new[i].str = 0;
	return (new);
}
