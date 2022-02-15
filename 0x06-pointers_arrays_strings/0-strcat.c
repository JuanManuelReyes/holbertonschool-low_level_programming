#include "main.h"
/**
*_strcat- asd
*@dest: asd
*@src: asd
*Return: asd
**/
char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i]; i++, length++)
		dest[length] = src[i];

	return (dest);
}
