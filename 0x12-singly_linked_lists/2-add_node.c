#include "lists.h"

/**
 *print_list - asd
 *@head: asd
 *@str: asd
 *Return: asd
 **/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_list;


	if(str == NULL)
		return (NULL);

	new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);


	
}
