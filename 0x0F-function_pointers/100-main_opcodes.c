#include <stdio.h>
#include <stdlib.h>

/**
 *main - asd
 *@argc:asd
 *@argv: asd
 *Return: asd
 **/
int main(int argc, char *argv[])
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < num)
	{
		printf("%02x", *((char *)main + 1));
		printf(" ");
		i++;
	}

	printf("\n");

	return (0);
}
