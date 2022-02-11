#include "main.h"
/**
 *_strlen - asd
 *@s: asd
 *Return: asd
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
		i++;

	return (i);
}


/**
 *_strcpy - asd
 *@dest: asd
 *@src: asd
 *Return: asd
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);

}
