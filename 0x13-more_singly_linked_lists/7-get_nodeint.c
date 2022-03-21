#include "lists.h"

/**
 *free_list - asd
 *@head: asd
 *Return: asd
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	
	aux = head;

	while (len != index)
	{
		if ((aux->next) != NULL)
			aux = aux->next;
		else
			return (NULL);
		len++;
	}
	return (aux);
}
