#include "lists.h"

/**
 *sum_listint - asd
 *@head: asd
 *Return: asd
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *nose;

	nose = head;

	if (head == NULL)
		return (0);

	while (nose != NULL)
	{
		sum = sum + nose->n;
		nose = nose->next;
	}
	return (sum);
}
