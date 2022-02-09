#include "main.h"

/**
 *add - asas
 *@b: asd
 *@a: sdf
 * Return:asd
*/
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
