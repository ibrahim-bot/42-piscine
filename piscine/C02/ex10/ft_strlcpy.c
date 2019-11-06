/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 10:26:09 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 13:38:38 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i])
		++i;
	while (src[j] != '\0' && j + 1 < size)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
