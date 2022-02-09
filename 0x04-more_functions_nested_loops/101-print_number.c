#include "main.h"

/**
 *print_number- asas
 *
 *
 * Return:asd
*/
void print_number(int n)
{
	int num = n;

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
