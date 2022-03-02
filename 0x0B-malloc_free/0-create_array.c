#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *create_array - asd
 *@size: asd
 *@c: asd
 *Return: asd
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array  == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(array + i) = c;

	return (array);

}
