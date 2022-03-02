#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *str_concat - asd
 *@s1: asd
 *@s2: asd
 *Return: asd
 **/
char *str_concat(char *s1, char *s2)
{
	char *string;
	int length_s1 = 0, length_s2 = 0, i, x;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	while (*(s1 + length_s1))
		length_s1++;

	while (*(s2 + length_s2))
		length_s2++;
	length_s2 += 1;

	string = malloc(sizeof(char) * (length_s1 + length_s2));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		*(string + i) = *(s1 + i);

	for (x = 0; x < length_s2; x++, i++)
		*(string + i) = *(s2 + x);

	return (string);
}
