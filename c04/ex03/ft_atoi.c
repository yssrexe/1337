int ft_issespace(char c)
{
	if(c == '\n' || c == '\f' || c == '\v' || c == '\t' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int convert(char *str , int i)
{
	int res;
	res = 0;

	while(ste[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] -48;
	}
	return (res);
}

int ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;
	int 	min;

	i = 0;
	sign = 1;
	res = 0;
	min = 0;

	while(issespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min++;
		i++;
	}
	if (min % 2)
		sign = -1;
	res = convert(str, i);
	return (res * sign);
}


