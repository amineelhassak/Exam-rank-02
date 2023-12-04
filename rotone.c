#include <unistd.h>

int main(int c, char **v)
{
	if (c == 2)
	{
		char *str=v[1];
		int i = 0;
		while(str[i])
		{	
			if(str[i] == 'z' || str[i] == 'Z')
				str[i] -= 25;
			else if((str[i] >= 'a' && str[i]<'z') || (str[i] >= 'A' && str[i] < 'Z'))
				str[i] +=1;
			write(1,&str[i],1);
			i++;
		}
	}
	write(1,"\n",1);
}
