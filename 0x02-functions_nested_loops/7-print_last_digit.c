#include "main.h"

/**
 *print_last_digit - asas
 *
 *@n: sdf
 * Return:asd
*/
int print_last_digit(int n)
{
	int las_dig = n % 10;

	if (las_dig < 0)
		las_dig *= -1;
	
	_putchar('0' + las_dig);

	return (las_dig);

}
