#include "main.h"

/**
 *print_binary - asd
 *@n: asd
 *Return: asd
 **/
void print_binary(unsigned long int n)
{
	unsigned long int copy;
	int i = 0;

	copy = n;

	while ((copy >>= 1) > 0)
		i++;

	while (i >= 0)
	{
		if ((n >> i--) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
