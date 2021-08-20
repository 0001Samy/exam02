#include "list.h"

t_list *sort_list(t_list* lst,int (*cmp)(int,int))
{
	t_list *actuel;
	actuel = lst;
	int a;
	int temp;
	while(a != 0)
	{
		a = 0;
		while (lst->next != 0)
		{
			if(cmp(lst->data ,lst->next->data) == 0)
			{
				temp = lst->next->data;
				lst->next->data = lst->data;
				lst->data = temp;
				a = 1;
			}
			lst = lst->next;
		}
		lst = actuel;

	}
	return (lst);
}
