#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value in a sorted 
 *                   array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size:  Number of elements in array.
 * @value: Is the value to search for.
 * Return: The index where value is locatedor if array is NULL, your 
 *           function must return -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid_idx = 0, left_idx = 0, right_idx = size - 1;

	if (array == NULL)
		return (-1);

    while (left_idx <= right_idx)
	{
        printf("Searching in array: ");
		print_array(array, right_idx, left_idx);
        printf("\n");

		mid_idx = (left_idx + right_idx) / 2;
		if (array[mid_idx] == value)
			return (mid_idx);
		
        /* If value is on left */ 
        if (array[mid_idx] > value)
			right_idx = mid_idx - 1;
		else
			left_idx = mid_idx + 1;
	}
	return (-1);
}

/**
 * print_array - Prints the array.
 * @array: Pointer to the array
 * @right: First index on the rigth
 * @left: Las index on the left
 */

void print_array(int *array, size_t right, size_t left)
{
    size_t idx;
    for (idx = left; idx <= right; idx++)
    {
        if (idx != right)
            printf("%d", array[idx]);
        else
            printf("%d\n", array[idx]);
    }
}