f/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:00:27 by exam              #+#    #+#             */
/*   Updated: 2019/06/28 13:37:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		spacejam(char c)
{
	if (c == 32 || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		countworld(char *str)
{
	int		world;
	int		i;

	i = 0;
	world = 0;
	while (str[i])
	{
		while (str[i] && spacejam(str[i]) == 1)
			i++;
		if (spacejam(str[i]) == 0 && str[i])
				world++;
		while (str[i] && spacejam(str[i]) != 1)
			i++;
	}
	return (world);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strduper(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] && spacejam(src[i]) == 0)
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	dest = ft_strncpy(dest, src, i);
	return (dest);
}

char	**ft_split(char *str)
{
	char	**dest;
	int 	size;
	int		i;

	i = 0;
	size = countworld(str);
	dest = malloc(sizeof(char *) * (size + 1));
	dest[size] = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] && spacejam(str[i]) == 1)
			i++;
		if (str[i] && spacejam(str[i]) == 0)
		{
			dest[size] = ft_strduper(str + i);
			size++;
		}
		while (str[i] && spacejam(str[i]) == 0)
			i++;
	}
	return (dest);
}
