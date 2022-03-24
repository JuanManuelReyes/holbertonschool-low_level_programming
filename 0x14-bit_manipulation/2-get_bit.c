#include "main.h"

/**
 *get_bit - asd
 *@n: asd
 *@index: asd
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
