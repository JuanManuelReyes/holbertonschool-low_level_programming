#include "main.h"
/**
 *_strcpy - asd
 *@dest: asd
 *@src: asd
 *Return: asd
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
