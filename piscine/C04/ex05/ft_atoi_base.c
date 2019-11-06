/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 13:55:09 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 15:25:33 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int i;
	int j;

	j = 1;
	i = 0;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((base[i] < 'a' || base[i] > 'z')
				&& (base[i] < 'A' || base[i] > 'Z')
				&& (base[i] < '0' || base[i] > '9'))
			return (0);
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		i++;
		j = i + 1;
	}
	return (1);
}

int	error(char *base)
{
	if (ft_strlen(base) < 2)
		return (0);
	if (check_base(base) == 0)
		return (0);
	return (1);
}

int	base_str(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) ||
			(c >= 'a' && c <= ('a' + base - 10)));
}

int	ft_atoi_base(char *str, char *base)
{
	int nb;
	int sign;
	int i;

	i = 0;
	nb = 0;
	sign = 1;
	if (error(base) == 0)
		return (0);
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = sign * -1;
	while (str[i] != '\0' && base_str(str[i], ft_strlen(base)))
	{
		if (str[i] >= 'A' && 'F' >= str[i])
			nb = (nb * ft_strlen(base)) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && 'f' >= str[i])
			nb = (nb * ft_strlen(base)) + (str[i] - 'a' + 10);
		else
			nb = (nb * ft_strlen(base)) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
