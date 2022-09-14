#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - asd
 * @separator: asd
 * @n: asdd
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		string = va_arg(args, char *);

		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");

		i++;

		if (separator != NULL && i < n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);

}
