#include <stdio.h>
#include <stdlib.h>

int main(int c,char **v)
{
		if(c == 2)
		{
			int n = atoi(v[1]);
			int prime;
			if(n == 1)
				printf("1");
			prime = 2; 
			while(n > 1)
			{
				if(n % prime == 0)
				{
					printf("%d",prime);
					n = n / prime;
					if(n > 1)
						printf("*");
					prime--;
				}
				prime++;
			}
		}
		printf("\n");
}
