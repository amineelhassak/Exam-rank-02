#include <stdlib.h>
#include<stdio.h>
int main(int c,char **v)
{
	if (c == 4)
	{
		int n = atoi(v[1]);
		int m =atoi(v[3]);
		if (v[2][0] =='*')
			printf("%d",n * m);
		else if (v[2][0] =='+')
			printf("%d",n + m);
		else if (v[2][0] =='-')
			printf("%d",n - m);
		else if (v[2][0] =='%')
			printf("%d",n % m);
		else if (v[2][0] =='/')
			printf("%d", n/m);
	}
	printf("\n");
}
