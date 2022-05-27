#include "hash_tables.h"

/**
 * hash_table_get - asd
 * @ht: asd
 * @key: asd
 * Return: asd
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	while (ht->array[idx] != NULL)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
			return (ht->array[idx]->value);

		ht->array[idx] = ht->array[idx]->next;
	}

	return (0);
}
