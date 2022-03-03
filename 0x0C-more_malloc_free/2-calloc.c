#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *str_concat - asd
 *@s1: asd
 *@s2: asd
 *Return: asd
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_space;
	unsigned int i, limit = 0;

	limit = nmemb * size;

	if (limit <= 0)
		return (NULL);

	mem_space = malloc(limit);

	if (mem_space == NULL)
		return (NULL);

	for (i = 0; i < limit; i++)
		*((char *)mem_space + i) = 0;

	return (mem_space);
}
