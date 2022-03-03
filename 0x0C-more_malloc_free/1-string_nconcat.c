#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_strlen - asd
 *@s: asd
 *Return: asd
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 *create_array - asd
 *@size: asd
 *@c: asd
 *Return: asd
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem_space;
	unsigned int length_s1, length_s2, i, x;

	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < 0)
		return (NULL);

	if (n >= length_s2)
		n = length_s2;

	length_s1 = length_s1 + n + 1;

	mem_space = malloc(sizeof(*mem_space) * length_s1);

	if (mem_space == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		*(mem_space + i) = *(s1 + i);

	for (x = 0; x < length_s2; x++, i++)
		*(mem_space + i) = *(s2 + x);

	return (mem_space);
}
