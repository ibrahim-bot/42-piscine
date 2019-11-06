/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_div_mod.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:25:26 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 19:16:54 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	int tmp2;

	tmp = *a / *b;
	tmp2 = *a % *b;
	*a = tmp;
	*b = tmp2;
}
