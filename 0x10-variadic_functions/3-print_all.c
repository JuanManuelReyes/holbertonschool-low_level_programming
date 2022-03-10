#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
 * sum_them_all - asd
 * @n: asd
 * Return: asd
 */
void print_all(const char * const format, ...)
{

}
