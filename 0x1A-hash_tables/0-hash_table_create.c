#include "hash_tables.h"

/**
 * hash_table_create - asd
 * @size: asd
 * Return: asd
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = NULL;

	ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);

	ptr->array = calloc(size, sizeof(hash_node_t *));

	if (ptr->array == NULL)
		return (NULL);

	ptr->size = size;

	return (ptr);
}
