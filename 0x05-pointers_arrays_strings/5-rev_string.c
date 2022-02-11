#include "main.h"
/**
 *print_rev - asd
 *@s: asd
 *
 */
void rev_string(char *s)
{
	int pos = 0;
	int i = 0;
	char sup;

	while (s[pos] != '\0')
		pos++;

	for (i = pos - 1; i >= 0; i--)
	{
		sup = s[i];
		s[i] = s[pos - i -1];
		s[pos - i - 1] = sup;
	}
}
