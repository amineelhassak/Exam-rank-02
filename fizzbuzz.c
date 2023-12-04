#include <unistd.h>
void ft_putnbr(int nbr)
{
	if(nbr>=0 && nbr <=9)
	{
		nbr += '0';
		write(1,&nbr,1);
	}
	else
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
}

int main()
{
	int i = 1;
	while (i <= 100)
	{	
		if (i%3 ==0 && i%5 == 0)
			write(1,"fizzbuzz\n",9);
		else if(i%3==0)
			write(1,"fizz\n",5);
		else if(i%5==0)
			write(1,"buzz\n",5);
		else
		{
			ft_putnbr(i);
			write(1,"\n",1);
		}
		i++;
	}
}
