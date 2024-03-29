/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 18:27:54 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 13:28:12 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = nb;
	if (j <= 0)
		return (0);
	while ((i * i) < j)
		i++;
	if ((i * i) == j)
		return (i);
	return (0);
}
