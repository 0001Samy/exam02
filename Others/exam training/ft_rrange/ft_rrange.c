/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 12:07:49 by exam              #+#    #+#             */
/*   Updated: 2019/06/28 12:52:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	long int	i;
	long int	size;
	int			*tab;
	long int	stock;
	long int	realstart;
	long int	realend;


	i = 0;
	size = 0;
	realstart = start;
	realend = end;
	stock = end;
	if (realstart == realend)
	{
		if (!(tab = malloc(sizeof(int) * 1)))
			return (0);
		tab[0] = realstart;
		return (tab);
	}
	if (realstart > realend)
	{
		while (stock <= realstart)
		{
			size++;
			stock++;
		}
		if (!(tab = malloc(sizeof(int) * size)))
			return (0);
		while (realend <= realstart)
		{
			tab[i] = realend;
			i++;
			realend++;
		}
	}
	else
	{
		while (stock >= realstart)
		{
			size++;
			stock--;
		}
		if (!(tab = malloc(sizeof(int) * size)))
			return (0);
		while (realend >= realstart)
		{
			tab[i] = realend;
			i++;
			realend--;
		}
	}
	return (tab);
}
