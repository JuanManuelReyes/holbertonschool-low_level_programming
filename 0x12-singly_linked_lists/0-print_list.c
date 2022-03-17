#include "lists.h"

/**
 *print_list - asd
 *@h: asd
 *Return: asd
 **/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}

		i++;
	}

	return (i);
}
