#include <stdio.h>
#include <stdlib.h>

/**
 *main - asas
 *@argc: asd
 *@argv: asd
 * Return:asd
*/
int main(int argc, char *argv[])
{
	int num, mult, prod;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	mult = atoi(argv[2]);
	prod = num * mult;

	printf("%d\n", prod);

	return (0);
}
