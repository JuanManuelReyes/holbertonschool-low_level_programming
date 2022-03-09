#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - asd
 *@name: asd
 *@f: asd
 *Return: asd
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
		f(name);
}
