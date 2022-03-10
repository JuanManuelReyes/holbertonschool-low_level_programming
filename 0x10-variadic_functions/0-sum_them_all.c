#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - asd
 * @n: asd
 * Return: asdd
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}
