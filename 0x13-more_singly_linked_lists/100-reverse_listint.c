#include "lists.h"

/**
 *reverse_listint - asd
 *@head: asd
 *Return: asd
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *actual = *head;
	listint_t *prev = NULL;
	listint_t *next;

	while (actual != NULL)
	{
		next = actual->next;
		actual->next = prev;
		prev = actual;
		actual = next;
	}

	*head = prev;

	return (*head);
}
