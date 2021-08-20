/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:36:07 by exam              #+#    #+#             */
/*   Updated: 2019/06/28 11:55:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_ocucu(char c, char *str)
{
	static int		i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		gromatchhurlenfer(char *s1, char *s2)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	while (s1[i])
	{
		if (ft_ocucu(s1[i], s2) == 1)
			l++;
		i++;
	}
	if (s1[l] == '\0')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	if (gromatchhurlenfer(av[1], av[2]) == 1)
		ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}
