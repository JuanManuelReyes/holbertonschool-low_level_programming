#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *create_array - asd
 *@size: asd
 *@c: asd
 *Return: asd
 **/
void *malloc_checked(unsigned int b)
{
	void *mem_space;

	mem_space = malloc(b);

	if (mem_space == NULL)
		return (98);

	return (mem_space);
}
