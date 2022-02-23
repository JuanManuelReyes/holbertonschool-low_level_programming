#include "main.h"
/**
*_strlen_recursion- asd
*@s: asd
*Return: asd
**/
int _strlen_recursion(char *s)
{
	int capture = 1;
	if (*s != '\0')
	{
		capture += _strlen_recursion(s + 1);
		return (capture);
	}

	return (0);
}
