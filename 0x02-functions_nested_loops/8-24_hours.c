#include "main.h"

/**
 *jack_bauer - asas
 *
 *
 * Return:asd
*/
void jack_bauer(void)
{
	int hs, min;

	for (hs = 0; hs <= 23; hs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + (hs / 10));
			_putchar('0' + (hs % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');

		}
	}
}
