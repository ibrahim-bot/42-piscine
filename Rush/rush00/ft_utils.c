/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putchar.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:57:55 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 17:19:03 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = sign * -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
