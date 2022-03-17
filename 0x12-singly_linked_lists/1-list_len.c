#include "lists.h"

/**
 *list_len - asd
 *@h: asd
 *Return: asd
 **/
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
