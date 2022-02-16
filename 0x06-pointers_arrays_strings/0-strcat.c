#include "main.h"
/**
*_strcat- asd
*@dest: asd
*@src: asd
*Return: asd
**/
char *_strcat(char *dest, char *src)
{
	int i = 0, n, length = 0;

	while (dest[i++] != '\0') 
		length++;

	for (n = 0; src[n] != '\0'; n++, length++)
		dest[length] = src[n];

	return (dest);
}
