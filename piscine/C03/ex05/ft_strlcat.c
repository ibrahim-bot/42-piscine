/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 20:21:23 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 14:26:57 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				dest_size;

	dest_size = ft_strlen(dest);
	i = 0;
	while (i + dest_size < size && src[i] != '\0')
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (size);
}
