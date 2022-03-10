#include <stdio.h>
#include <stlib.h>

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
}
