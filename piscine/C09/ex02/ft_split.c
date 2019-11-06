/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 17:12:59 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 19:39:22 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_sep(char c, char *sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (sep[i])
		c == sep[i++] ? count++ : 0;
	if (count || c == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strcpy(char *dest, char *src, int len)
{
	int i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
}

int		*get_words(char *str, char *sep)
{
	int i;
	int j;
	int count;
	int *indexes;

	count = !is_sep(str[0], sep);
	i = 0;
	while (str[++i])
		!is_sep(str[i], sep) && is_sep(str[i - 1], sep) ? count++ : 0;
	indexes = (int*)malloc((count + 1) * 4);
	*indexes = 0;
	i = 1;
	j = 0;
	is_sep(str[0], sep) ? 0 : j++;
	while (str[i])
	{
		!is_sep(str[i], sep) && is_sep(str[i - 1], sep) ? indexes[j++] = i : 0;
		i++;
	}
	indexes[j] = -1;
	return (indexes);
}

char	**ft_split(char *str, char *charset)
{
	int		wordc;
	int		i;
	int		len;
	int		*id;
	char	**stab;

	wordc = 0;
	i = 0;
	id = get_words(str, charset);
	while (id[wordc] != -1)
		wordc++;
	if ((stab = (char**)malloc((wordc + 1) * sizeof(char*))) == 0)
		return (NULL);
	while (id[i] != -1)
	{
		len = 0;
		while (is_sep(str[id[i] + len], charset) == 0 && str[id[i] + len])
			len++;
		stab[i] = (char*)malloc(len + 1);
		ft_strcpy(stab[i], str + id[i], len);
		i++;
	}
	stab[i] = 0;
	return (stab);
}
