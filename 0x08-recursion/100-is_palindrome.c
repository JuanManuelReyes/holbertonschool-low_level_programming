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

/**
*palindrome - asd
*@s: asd
*@i: asd
*@x: asd
*Return: asd
**/
int palindrome(char *s, int i, int x)
{
	if (i == x)
		return (1);
	else if (i == x - 1)
		return (s[i] == s[x]);
	else if (s[i] != s[x])
		return (0);
	else
		return (palindrome(s, i + 1, x - 1));
}

/**
*_strlen_recursion- asd
*@s: asd
*Return: asd
**/
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length == 0 || *s != s[length - 1])
		return (0);
	else
		return (palindrome(s, 0, length - 1));
}
