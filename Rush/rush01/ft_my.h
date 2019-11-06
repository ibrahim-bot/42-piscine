/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_my.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 21:42:22 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 23:23:06 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_MY_H
# define FT_MY_H

# include <unistd.h>
# include <stdio.h>

# define LI	4
# define COL 4
# define VAL ((LI * 2) + (COL * 2))

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	init_tab(int tab[LI][COL]);
void	print_tab(int tab[LI][COL]);
void	modif_tab2(int tab[LI][COL], int *val_left, int *val_right);
void	modif_tabup(int tab[LI][COL], int *val_up, int *val_down);
void	modif_tabup2(int tab[LI][COL], int *val_up, int *val_down);
void	modif_tabdown(int tab[LI][COL], int *val_down, int *val_up);
void	modif_tabdown2(int tab[LI][COL], int *val_down, int *val_up);
void	modif_tablef(int tab[LI][COL], int *val_left, int *val_right);
void	modif_tablef2(int tab[LI][COL], int *val_left, int *val_right);
void	modif_tabrig(int tab[LI][COL], int *val_right, int *val_left);
void	modif_tabrig2(int tab[LI][COL], int *val_right, int *val_left);
void	init_valup(char *str, int *val_up, int *val_down);
void	init_vallef(char *str, int *val_left, int *val_right);

#endif
