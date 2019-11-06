/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_printable.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 10:17:30 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 10:18:13 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (ft_is_printable(str[i++]) == 0)
			return (0);
	return (1);
}
