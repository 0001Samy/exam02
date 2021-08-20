/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:08:35 by sabadoud          #+#    #+#             */
/*   Updated: 2021/08/20 14:46:32 by sabadoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int coco(int nbr)
	{
	int i;

	i = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return i;
}

/*char *ft_itoa(int nbr)
{
	char *dest;
	int i;
	int n;
	int nb;

	nb = nbr;
	n = coco(nb);
	i = 0;
	if (!(dest))
		return 0;
	dest = malloc(sizeof(char) * n + 1);
	dest[n] = '\0';
	if (nb < 0)
	{
		dest[i] = '-';
		nb = -nb;
		i++;
	}
	while (i != n)
	{
		dest[n - 1] = (nb % 10) + '0';
		nb = nb / 10;
		n--;
	}
	return dest;
}*/


char *ft_itoa(int nbr)
{
	int i;
	int n;
	char *dest;
	int nb;

	i = 0;
	nb = nbr;
	n = coco(nb);
	if (!(dest))
		return 0;
	dest = malloc(sizeof(char) * n + 1);
	dest[n] = '\0';
	if (nb < 0)
	{
		dest[i] = '-';
		nb = -nb;
		i++;;
	}
	while (i != n)
	{
		dest[n - 1] = (nb % 10) + '0';
		nb = nb / 10;
		n--;
	}
	return dest;
}

int main(int ac, char **av)
{
	printf("%s", ft_itoa(42));
}
