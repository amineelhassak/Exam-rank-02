#include<stdlib.h>

int ft_get_count(int nbr)
{
	int c =0;
	int index = 0;
	if(nbr < 0)
	{
		c++;
		nbr = -nbr;
	}
	if(nbr >= 0 && nbr<=9)
		c++;
	if (nbr > 10)
		index = 1;
	while (nbr >= 10)
	{
		nbr = nbr/10;
		c++;
	}
	if (index == 1)
		c++;
	return  c;
}

char *ft_itoa(int nbr)
{
	int len;
	char *str;
	int index = 0;

	len = ft_get_count(nbr);
	str =malloc(sizeof(char) * len);
	str[len] = '\0';
	len--;
	if(nbr < 0)
	{
		nbr = -nbr;
		index = 1;
	}
	while (len >= 0)
	{
		str[len] = nbr%10 + '0';
		len--;
		nbr = nbr/10;
	}
	if(index == 1)
		str[0] = '-';
	return str;
}
