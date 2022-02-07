#include <stdio.h>

/**
 *main - asas
 *
 *
 * Return:asd
*/
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 *print_alphabet_x10 - asdfsdf
*/
void print_alphabet_x10(void)
{
	int num = 0;
	char letter;

	while (num++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	}
}
