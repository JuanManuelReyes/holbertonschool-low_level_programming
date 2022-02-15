#include "main.h"
/**
*reverse_array- asd
*@a: asd
*@n: asd
**/
char *rot13(char *encoded)
{
	int i = 0, x = 0;

	char base[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chng[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; encoded[i] != '\0'; i++)
	{
		for (x = 0; base[i] != '\0'; x++)
		{
			if (encoded[i] == base[x])
				encoded[i] = chng[x];
		}
	}

	return (encoded);	
}
