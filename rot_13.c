#include <unistd.h>

int main(int c,char **v)
{
	if (c == 2)
	{
		char *str =v[1];
		while(*str)
		{
			if((*str <= 'm' && *str >= 'a') || (*str <= 'M' && *str >= 'A'))
				*str +=13;
			else if((*str>='n' && *str <= 'z') ||(*str>='N' && *str <= 'Z'))
				*str -=13;
			write(1,str,1);
			str++;
		}
	}
	write(1,"\n",1);
}
