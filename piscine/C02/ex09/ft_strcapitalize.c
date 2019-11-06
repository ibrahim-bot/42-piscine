/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 10:22:03 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 12:32:48 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_lowerize(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 'a' - 'A';
}

void	ft_upperize(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c += 'A' - 'a';
}

int		ft_char_is_alphanumeric(char c)
{
	if (c < '0')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	if (c > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next_capitale;

	i = 0;
	next_capitale = 1;
	while (str[i] != '\0')
	{
		if (ft_char_is_alphanumeric(str[i]) == 0)
			next_capitale = 1;
		else
		{
			if (next_capitale == 1)
				ft_upperize(str + i);
			else
				ft_lowerize(str + i);
			next_capitale = 0;
		}
		++i;
	}
	return (str);
}
