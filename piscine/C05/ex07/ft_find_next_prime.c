/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 18:53:28 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 18:04:12 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime(unsigned int nb)
{
	unsigned int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int i;
	unsigned int j;

	j = nb;
	if (nb < 2)
		return (2);
	i = nb;
	while (i < 2 * j)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
