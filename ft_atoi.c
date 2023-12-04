int ft_isdigit(int c)
{
	return (c >= '0' && c<='9');
}

int	ft_atoi(const char *str)
{
	int r;
	int s;

	s = 1;
	r = 0;
	while (*str ==' ' || (*str >=9 && *str<= 13))
		str++;
	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			s = -1;
	   str++;	
	}
	while(ft_isdigit(*str))
	{
		r = r * 10 + ((*str) - '0');
		str++;
	}
	return r * s;
}
