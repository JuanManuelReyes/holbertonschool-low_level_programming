#include "main.h"
/**
*reverse_array- asd
*@a: asd
*@n: asd
**/
char *string_toupper(char *string)
{
	int i = 0;

	while (string[i])
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;

		i++;
	}

	return (string);
}
