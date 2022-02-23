#include "main.h"
/**
 *factorial - asd
 *@n: asd
 *Return: asd
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
