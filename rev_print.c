#include<unistd.h>

int ft_strlen(char *str)
{
	int c = 0;
	while(str[c])
		c++;
	return c;
}

int main(int c,char **v)
{
	if (c==2)
	{
		int len;

		len = ft_strlen(v[1]);
		len--;
		while(len >= 0)
		{
			write(1, &v[1][len], 1);
			len--;
		}
	}
	write(1,"\n",1);
}
