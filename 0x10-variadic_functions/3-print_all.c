#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_c - asd
 * @c: asd
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - asd
 * @s: asd
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_i - asd
 * @i: asd
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - asd
 * @f: asd
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - asd
 * @format: asd
 * Return: asd
 */
void print_all(const char * const format, ...)
{
	print_t op[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

        int i = 0, x = 0;
	va_list args;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		while (op[x].type != NULL)
		{
			if (*(op[x].type) == format[i])
			{
				printf("%s", separator);
				op[x].func(args);
				separator = ", ";
				break;
			}

			x++;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}
