#include "function_pointers.h"

/**
 *int_index - asd
 *@array: asd
 *@size: asd
 *@cmp: asd
 *Return: asd
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
