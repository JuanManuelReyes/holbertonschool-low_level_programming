#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - asd
 *@argc: asd
 *@argv: asd
 *Return: asd
 **/
int main(int argc, char *argv[])
{
	int first_factor, second_factor, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_factor = atoi(argv[1]);
	second_factor = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
		(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(first_factor, second_factor);

	printf("%d\n", result);

	return (0);
}
