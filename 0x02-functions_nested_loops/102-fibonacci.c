#include <stdio.h>

/**
 *main - asas
 *
 *
 * Return:asd
*/
int main(void)
{
	int i;
	int n1 = 0, n2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = n1 + n2;
		printf("%d", sum);

		n1 = n2;
		n2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
