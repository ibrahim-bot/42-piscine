/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 17:35:09 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 18:01:16 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
