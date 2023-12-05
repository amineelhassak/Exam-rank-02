#include<unistd.h>
int main(int c,char **v)
{
	if (c ==2)
	{
		char *str;
		str = v[1];
		while(*str && (*str >= 9 && 8str<=13))
			str++;
		while(*str && *str != ' ' && str )
			str++;
	}
	write(1,"\n",1);
}
