int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i;

	i = 0;
	char temp;
	int size;
	size = ft_strlen(str);
	int y;
	y = (size /2) - 1;
	while (i <= (y))
	{
		temp = str[size - 1];
		str[size - 1] = str[i];
		str[i] = temp;
		i++;
		size--;
	}
	return(str);
}
