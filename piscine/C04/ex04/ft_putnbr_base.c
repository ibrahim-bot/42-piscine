/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 18:12:30 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 11:00:54 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;
	int len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	j = 1;
	while (i < len)
	{
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (ft_char_is_alphanumeric(base[i]) == 0)
			return (0);
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int abs;
	unsigned int pop_unit;
	unsigned int len;

	if (check_base(base) == 0)
		return ;
	len = ft_strlen(base);
	if (nbr < 0)
		ft_putchar('-');
	abs = (nbr < 0) ? 0 - nbr : nbr;
	abs < len ? ft_putchar(base[abs]) : 0;
	if (abs >= len)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_base(abs / len, base);
			ft_putchar(abs % len + '0');
			return ;
		}
		pop_unit = abs % len;
		abs /= len;
		ft_putnbr_base(abs, base);
		ft_putchar(base[pop_unit]);
	}
}
