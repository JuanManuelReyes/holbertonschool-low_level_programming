#include "lists.h"

/**
 *listint_len - asd
 *@h: asd
 *Return: asd
 **/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
