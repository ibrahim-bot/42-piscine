/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 16:05:43 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 16:38:02 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (ft_strlen(str) == 0 && ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strlen(to_find) == 0)
			return (str);
		k = i;
		while (str[i] == to_find[j])
		{
			if (j == (ft_strlen(to_find) - 1))
				return (str + k);
			i++;
			j++;
		}
		j = 0;
		i = k;
		i++;
	}
	return (NULL);
}
