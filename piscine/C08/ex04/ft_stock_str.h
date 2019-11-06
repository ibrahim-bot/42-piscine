/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_stock_str.h                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 13:48:20 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 15:02:51 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <stdlib.h>

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;

#endif
