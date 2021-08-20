int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int stock;
	i = 0;
	neg = 0;
	stock = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
				neg++;
			i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		stock = stock * 10 + (str[i] - 48);
		i++;
	}
	if(neg == 1)
		return (-stock);
	return (stock);
}
