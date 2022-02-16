#include "main.h"
/**
*rot13 - asd
*@encoded: asd
*Return: asd
**/
char *rot13(char *encoded)
{
	int i = 0, x = 0;

	char base[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			 'G', 'H', 'I', 'J', 'K', 'L',
			 'M', 'N', 'O', 'P', 'Q', 'R',
			 'S', 'T', 'U', 'V', 'W', 'X',
			 'Y', 'Z', 'a', 'b', 'c', 'd',
			 'e', 'f', 'g', 'h', 'i', 'j',
			 'k', 'l', 'm', 'n', 'o', 'p',
			 'q', 'r', 's', 't', 'u', 'v',
			 'w', 'x', 'y', 'z'};

	char chng[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			 'T', 'U', 'V', 'W', 'X', 'Y',
			 'Z', 'A', 'B', 'C', 'D', 'E',
			 'F', 'G', 'H', 'I', 'J', 'K',
			 'L', 'M', 'n', 'o', 'p', 'q',
			 'r', 's', 't', 'u', 'v', 'w',
			 'x', 'y', 'z', 'a', 'b', 'c',
			 'd', 'e', 'f', 'g', 'h', 'i',
			 'j', 'k', 'l', 'm'};

	while (encoded[i])
	{
		for (x = 0; x < 52; x++)
		{
			 if (encoded[i] == base[x])
                        {
                                encoded[i] = chng[x];
                                break;
                        }
		}
		i++;
	}

	return (encoded);
}
