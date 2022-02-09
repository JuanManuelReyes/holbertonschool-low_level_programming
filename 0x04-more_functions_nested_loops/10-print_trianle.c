#include "main.h"

/**
 *add - asas
 *@b: asd
 *@a: sdf
 * Return:asd
*/
void print_triangle(int size)
{
int x, i;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (i= size - x; i> 0; i--)
				_putchar(' ');

			for (i= 0; i < x; i++)
				_putchar('#');

			if (x == size)
				continue;

			_putchar('\n');
		}
	}	
}

