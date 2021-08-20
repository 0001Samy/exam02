#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int check(char *str,char *base)
{
	int i;
	int y;

	y = 0;
	i = 0;
	while (base[i] != '\0')
	{
		if(str[y] == base[i])
			y++;
		i++;
	}
	if (str[y] == '\0')
		return (1);
	return (0);
}


int main(int ac, char **av)
{
	if(ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	if (check(av[1],av[2]) == 1)
	{
		ft_putstr(av[1]);
		ft_putchar('\n');
		return (0);
	}
	else
		ft_putchar('\n');
		return (0);
}
