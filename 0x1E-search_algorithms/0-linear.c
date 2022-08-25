#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size:  Number of elements in array.
 * @value: is the value to search for.
 * Return: the first index where value is located or -1 if array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}

