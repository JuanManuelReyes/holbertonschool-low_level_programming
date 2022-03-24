#include "main.h"

/**
 *clear_bit - asd
 *@n: asd
 *@index: asd
 *Return: asd
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set_value;

	if (index > 64)
		return (-1);

	set_value = 1 << index;

	if (*n & set_value)
		*n ^= set_value;

	return (1);
}
