#include "main.h"
/**
*leet - asd
*@encoded: asd
*Return: asd
**/
char *leet(char *encoded)
{
	int i = 0, x = 0;

	char base[] = "aAeEoOtTlL";
	char chng[] = "4433007711";

	for (i = 0; encoded[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (encoded[i] == base[x])
				encoded[i] = chng[x];
		}
	}

	return (encoded);
}
