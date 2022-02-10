#include "main.h"

/**
 *print_number- asas
 *@n: asd
 *
 *
*/
void print_number(int n)
{
	unsigned int dc, nat, dig;
	double f = 1;

	nat = n;

	if (nat == 0)
		_putchat('0');
	else
	{
		if (n < 0)
		{
			nat = -n;
			_putchat('-');
		}
		while (f <= nat)
			f *= 10;
		dc = f / 10;

		while (dc >= 1)
		{
			dig = nat / f;
			_putchar(dig + '0');
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
}
