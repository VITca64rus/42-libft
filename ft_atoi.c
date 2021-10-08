int	ft_atoi(const char *str)
{
	long int	res;
	int	i;
	int	znak;

	res = 0;
	i = 0;
	znak = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		znak = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		
		if (znak * res < -2147483648)
			return (0);
		else if (res > 2147483647)
			return (-1);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)res * znak);
}

