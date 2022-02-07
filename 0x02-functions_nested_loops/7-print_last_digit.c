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

<<<<<<< HEAD
	_putchar('0' + las_dig);
=======
>>>>>>> 0c447497dfc62a73a6174f628d39fe1993004784
	return (las_dig);

}
