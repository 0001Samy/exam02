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
int	check(char str,char *alpha)
{
	int i;

	i = 0;
	while (alpha[i] != '\0')
	{
		if(str == alpha[i])
			return (i);
		i++;
	}
	return (0);
}

void	 rot_13(char *str)
{
	int i;
	i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = alpha[check(str[i],alpha) + 13];
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = alpha[check(str[i] + 32,alpha) + 13] - 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		rot_13(av[ac-1]);
			ft_putchar('\n');
	}
	return (0);
}


