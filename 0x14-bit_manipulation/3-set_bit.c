#include "main.h"

/**
 *set_bit - asd
 *@n: asd
 *@index: asd
 *Return: asd
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set_value;

	if (index > 64)
		return (-1);

	set_value = 1 << index;
	*n = (*n | set_value);

	return (1);
}
