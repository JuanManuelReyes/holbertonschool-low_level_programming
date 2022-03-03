#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *alloc_grid - asd
 *@width: asd
 *@height: asd
 *Return: asd
 **/
int *array_range(int min, int max)
{
	int *array;
	int size = 0, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
		return (NULL);

	while (i < size && min <= max)
	{
		*(array + i) = min;
		i++;
		min++;
	}
	
	return (array);
}
