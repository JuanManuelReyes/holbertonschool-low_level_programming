#include <stdio.h>

/**
 *main - asas
 *
 *
 * Return:asd
*/
int main(void)
{
long n1 = 0, n2 = 1, sum;
long total;

	while (1)
	{
		sum = n1 + n2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		n1 = n2;
		n2 = sum;
	}
	printf("%ld\n", total);

	return (0);
}
