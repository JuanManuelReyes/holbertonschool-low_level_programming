#include "main.h"
/**
 *print_rev - asd
 *@s: asd
 *
 */
void print_rev(char *s)
{
	int pos = 0;
	int i = 0;

	while (s[pos] != '\0')
		pos++;

	for (i = pos - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
