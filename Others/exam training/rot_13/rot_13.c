/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 10:43:34 by exam              #+#    #+#             */
/*   Updated: 2019/06/28 11:23:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_charalpha(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

void	ft_rot(char *str)
{
	int		i;
	int		c;
	char	k;

	i = 0;
	while (str[i])
	{
		k = str[i];
		c = 0;
		if ((ft_charalpha(str[i]) == 1 && str[i] <= 109) || (ft_charalpha(str[i]) == 2 && str[i] <= 77))
			ft_putchar(str[i] + 13);
		else if ((ft_charalpha(str[i]) == 1 && str[i] > 109) || (ft_charalpha(str[i]) == 2 && str[i] > 77))
		{
			if (ft_charalpha(str[i]) == 1)
				while (k < 'z')
				{
					k++;
					c++;
				}
			else if (ft_charalpha(str[i]) == 2)
				while (k < 'Z')
				{
					k++;
					c++;
				}
			if (k == 'z')
				str[i] = 'a';
			if (k == 'Z')
				str[i] = 'A';
			c++;
			ft_putchar(str[i] + (13 - c));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_rot(av[1]);
	ft_putchar('\n');
	return (0);
}
