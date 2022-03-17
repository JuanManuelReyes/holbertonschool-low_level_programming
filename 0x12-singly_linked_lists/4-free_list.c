#include "lists.h"

/**
 *print_list - asd
 *@h: asd
 *Return: asd
 **/
void free_list(list_t *head)
{
	list_t *actual, *next;

	actual = head;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual->str);
		free(actual);
		actual = next;
	}
}
	
