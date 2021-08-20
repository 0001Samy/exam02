/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 19:13:01 by exam              #+#    #+#             */
/*   Updated: 2019/06/21 20:09:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		entierlen(long int nbr)
{
	int l;

	l = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		l++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int nbr)
{
	char 	*dest;
	int		i;
	int		len;
	long int nb;

	nb = nbr;
	len = entierlen(nb);
	i = 0;
	if(!(dest = malloc(sizeof(char) * len + 1)))
		return (0);
	dest[len] = '\0';
	if (nb < 0)
	{
		dest[i] = '-';
		nb = -nb;
		i++;
	}
	while (i != len)
	{
		dest[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (dest);
}
