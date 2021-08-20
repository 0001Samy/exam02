/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:49:50 by exam              #+#    #+#             */
/*   Updated: 2019/06/28 14:07:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{

	t_list		kaaris[100000];
	int			tmp;
	int			sort;
	int			i;

	i = 0;
	sort == 0;
	while (lst->next != NULL)
	{
		kaaris[i] = lst->data;
		lst = lst->next;
		i++;
	}
	i++;
	kaaris[i].next = 0;
	i = 0;
	while (sort == 0)
	{
		sort = 1;
		while (kaaris[i].next != 0)
		{
			if ((*cmp)(kaaris[i].data, kaaris[i + 1].data) == 0)
			{
				tmp = kaaris[i].data;
				kaaris[i].data = kaaris[i + 1].data;
				kaaris[i + 1] = tmp;
				sort = 0;
			}
			i++;
		}
	}
}
