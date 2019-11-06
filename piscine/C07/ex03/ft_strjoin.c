/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 12:46:31 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 18:13:41 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

int		ft_strlen_tab(int size, char **strs)
{
	int count;
	int j;

	count = 0;
	while (count < size)
	{
		j = 0;
		while (strs[j])
		{
			count++;
			j++;
		}
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		count;

	if (size == 0)
	{
		str = malloc(sizeof(char) * 1);
		str = "";
		return (str);
	}
	count = ft_strlen_tab(size, strs);
	str = (char*)malloc(sizeof(*str) * (count + 1));
	i = 0;
	while (i < size - 1)
	{
		str = ft_strcat(str, strs[i + 1]);
		if (i != size - 2)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
