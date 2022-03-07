#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/**
 *main - asd
 *Return: asd
 **/
int main(void)
{
	int n, i = 2772;

	n = rand() % 98;

	while (i != 0)
	{
		putchar(n);
		i -= n;
		if (i <= 125 && i >= 33)
			n = i;
	}

	return (0);
}
