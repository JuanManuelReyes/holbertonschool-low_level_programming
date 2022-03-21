#include "lists.h"

/**
 * _strlen - asd
 * @string: asd
 * Return: asd
 **/
unsigned int _strlen(const char *string)
{
	unsigned int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}

/**
 *add_node_end - asd
 *@head: asd
 *@str: asd
 *Return: asd
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node, *last_pos;

	if (str == NULL)
		return (NULL);

	new_end_node = malloc(sizeof(list_t));

	if (new_end_node == NULL)
		return (NULL);

	new_end_node->str = strdup(str);
	new_end_node->len = _strlen(str);
	new_end_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_end_node;
	}
	else
	{
		last_pos = *head;
		while (last_pos->next)
			last_pos = last_pos->next;

		last_pos->next = new_end_node;
	}
	return (new_end_node);
}
