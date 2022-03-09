#include "3-calc.h"

/**
 *get_op_func - asd
 *@s: asd
 *Return: asd
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op) /*NO SE SI SE PUEDE*/
			return (ops[i].f);

		i++;
	}

	return (NULL);
}