#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - asd
 * @n: asd
 * Return: asd
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i = 0;

	va_start(args, n);

	while (i < n)
	{
		sum = va_arg(args, unisged int) + sum;
		i++
	}

	va_end(args);

	return (sum);
}
