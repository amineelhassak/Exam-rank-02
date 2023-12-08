#include<unistd.h>
void	print_bits(unsigned char octet)
{
	int bit = 7;
	char c;
	while(bit >= 0)
	{
		c = ((octet >> bit) & 1) + '0';
	    write(1, &c, 1);
		bit--;
	}
}
