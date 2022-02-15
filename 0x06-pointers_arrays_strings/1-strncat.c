#include "main.h"
/**
*_strncat - asd
*@dest: asd
*@src: asd
*@n: asd
*Return: asd
*
**/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[length++] = src[i];

	return (dest);
}
