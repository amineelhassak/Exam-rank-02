#include<unistd.h>
int ft_atoi(char *str)
{
	int s = 1;
	int r = 0;
	int i = 0;
	if(str[i] == '-')
	{
		s = -1;
		i++;
	}
	while(str[i])
	{
		r = (r *10) + str[i] - '0';
		i++;
	}
	return s*r;
}
int is_prime(int nbr)
{
	int i=2;
	while(i < nbr)
	{
		if(nbr % i==0)
			return 0;
		i++;
	}
	return 1;
}
void ft_putnbr(int nbr)
{
	if(nbr >= 0 && nbr <= 9)
	{
		nbr = nbr + '0';
		write(1,&nbr,1);
	}
	else
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
}
int main(int c,char **v)
{
	if(c == 2)
	{
		int s = 0;
		int i = 2;
		int nbr =ft_atoi(v[1]);
		if(nbr < 0 )
		{
			write(1,"0\n",2);
			return 0;
		}
		if(nbr == 1)
		{
			write(1,"1",1);
			return 0;
		}
		while(i <= nbr)
		{
			if (is_prime(i))
			{
				s += i;	
			}
			i++;
		}
		ft_putnbr(s);
		write(1,"\n",1);
	}
	else
		write(1,"0\n",2);
}
