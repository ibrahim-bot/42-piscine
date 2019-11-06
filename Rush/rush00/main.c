/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:59:57 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 17:17:06 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
int		ft_atoi(char *str);

int		error(int x, int y)
{
	if (x == 0)
		return (84);
	if (y == 0)
		return (84);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (84);
	if (av[1][0] == '-' || av[2][0] == '-')
		return (84);
	if (error(ft_atoi(av[1]), ft_atoi(av[2])) == 84)
		return (84);
	rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
