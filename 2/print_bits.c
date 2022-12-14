#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1 + '0');
		printf("%d", bit);
	}
}

/*
int main(void)
{
	print_bits(1);
	printf("\n");
	print_bits(2);
	printf("\n");
	print_bits(3);
}
*/
