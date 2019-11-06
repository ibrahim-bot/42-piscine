/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 16:27:35 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 10:52:32 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
