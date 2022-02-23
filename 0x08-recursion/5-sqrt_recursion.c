#include "main.h"

/**
 *_sqrt - asd
 *@num: asd
 *@root: asd
 *Return: asd
 */
int _sqrt(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root == num / 2)
		return (-1);
	else
		return (_sqrt(num, root + 1));
}



/**
 *_sqrt_recursion - asd
 *@n: asd
 *Return: asd
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_sqrt(n, root));
}
