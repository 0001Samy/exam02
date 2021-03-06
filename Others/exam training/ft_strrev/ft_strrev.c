/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:27:15 by exam              #+#    #+#             */
/*   Updated: 2019/06/28 11:33:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char 	c;

	i = 0;
	n = 0;
	while (str[i])
		i++;
	i--;
	while (n < i)
	{
		c = str[i];
		str[i] = str[n];
		str[n] = c;
		n++;
		i--;
	}
	return (str);
}
