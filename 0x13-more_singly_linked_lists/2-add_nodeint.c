#include "lists.h"

/**
 *add_nodeint - asd
 *@head: asd
 *@n: asd
 *Return: asd
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
