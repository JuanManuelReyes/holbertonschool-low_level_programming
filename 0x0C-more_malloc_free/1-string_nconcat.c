#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *create_array - asd
 *@size: asd
 *@c: asd
 *Return: asd
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_array;
	unsigned int i = 0, x = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i++] != '\0')
		length++;

	new_array = malloc(sizeof(char) * (length + n + 1));

	if (new_array == NULL)
		return (NULL);


	i = 0;

	while (s1[i] != '\0')
	{
		new_array[i] = s1[i];
		i++;
	}

	while (x < n && s2[x] != '\0')
	{
		new_array[i] == s2[x];
		i++;
		x++;
	}

	new_array[i] = '\0';

	return (new_array);
}
