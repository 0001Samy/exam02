#include <stdlib.h>

int	count(char *str)
{
	int i;
	int c;
	int a;
	int h;
	h = 0;
	a = 0;
	c = 0;
	i = 0;
	int p;
	p = 0;
	int temp;

	while (str[i] != '\0')
	{	
		temp = p;
		while((str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		while(!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i] != '\0')
		{
			i++;
			p++;
		}
		if(p > temp)
			c++;
	}
	return (c);
}

char **ft_split(char *str)
{
	int size;
	char **tab;
	int i;
	int y;
	int e;

	size = count(str);
	tab = malloc(sizeof(char*) * (size + 2));

	e = 0;
	y = 0;
	i = 0;	
	while (y < size)
	{
		e = 0;
		while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while(!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i] != '\0')
		{
			e++;
			i++;
		}
		tab[y] = malloc(sizeof(char) * (e + 1));
		y++;
	}
	y = 0;
	e = 0;
	i = 0;
	while (y < size)
	{
		while((str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		while(!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i] != '\0')
		{
			tab[y][e] = str[i];
			i++;
			e++;
		}
		tab[y][e] = '\0';
		y++;
		e = 0;
	}
	tab[size] = 0;
	return (tab);
}
