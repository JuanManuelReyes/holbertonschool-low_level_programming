#include "main.h"

/**
 * _strlen - asd
 * @string: asd
 * Return: asd
 **/
unsigned int _strlen(const char *string)
{
	unsigned int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}

/**
 *binary_to_uint - asd
 *@b: asd
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int mul = 1, num = 0, length;
	int i = 0;

	if (b == NULL)
		return (0);

	length = _strlen(b);

	i = length - 1;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			num += mul;

		mul *= 2;
		i--;
	}

	return (num);
}
