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
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(nil)";
		return;
	}


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
	int i = 0, x;
        va_list args;
        char *separator = "";


	print_t op[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		x = 0;
		while (op[x].type != '\0')
		{
			if (op[x].type == format[i])
			{
				printf("%s", separator);
				op[x].func(args);
				separator = ", ";
			}

			x++;
		}

		i++;
	}
	va_end(args);

	printf("\n");
}
