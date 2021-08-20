#include <stdlib.h>

int	ft_strlenitoa(int str)
{
	int i;
	i = 0;
	if(str <= 0)
		i++;
	while(str != 0)
	{
		str = str/10;
		i++;
	}
	return (i);
}

char 	*ft_itoa(int nbr)
{
	int size;
	char *tab;
	int neg;
	int temp;
	long int  n;
	n = nbr;
	size = ft_strlenitoa(nbr);
	neg = 0;

	if(nbr < 0)
	{	
		n = -n;
		neg = 1;
	}
	int sizou;

	sizou = size - 1;
	temp = size;
	if(!(tab = malloc(sizeof(char)*(size + 1))))
		return (0);
	while(sizou >= neg)
	{
		tab[sizou] = (n % 10) + '0';
		n = n / 10;
		sizou--;
	}
	tab[size] = '\0';
	if(neg == 1)
		tab[0] = '-';
	return (tab);
}
