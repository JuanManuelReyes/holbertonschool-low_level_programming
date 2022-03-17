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
 *add_node - asd
 *@head: asd
 *@str: asd
 *Return: asd
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;

	if (str == NULL)
		return (NULL);

	new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = _strlen(str);
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
