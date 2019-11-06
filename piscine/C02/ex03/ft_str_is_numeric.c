/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_numeric.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 10:08:33 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 10:09:38 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (ft_isnum(str[i++]) == 0)
			return (0);
	return (1);
}
