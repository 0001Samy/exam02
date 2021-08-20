/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 10:27:09 by exam              #+#    #+#             */
/*   Updated: 2019/06/28 10:34:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_revparty(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_revparty(av[1]);
	return (0);
}
