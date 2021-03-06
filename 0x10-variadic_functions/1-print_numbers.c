#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - asd
 * @separator: asd
 * @n: asd
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));
		i++;

		if (separator != NULL && i < n)
			printf("%s", separator);

	}
	printf("\n");

	va_end(args);
}
