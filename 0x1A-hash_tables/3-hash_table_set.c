#include "hash_tables.h"

/**
 * hash_table_set - asd
 * @ht: asd
 * @key: asd
 * @value: asd
 * Return: asd
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *sn = NULL, *nn = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	nn = malloc(sizeof(hash_node_t));

	if (nn == NULL)
		return (0);

	sn = ht->array[idx];

	while (sn != NULL)
	{
		if (strcmp(sn->key, key) == 0)
		{
			free(sn->value);
			sn->value = strdup(value);
			free(nn);
			return (1);
		}

		sn = sn->next;
	}

	nn->key = strdup(key);
	nn->value = strdup(value);
	nn->next = ht->array[idx];
	ht->array[idx] = nn;

	return (1);

}
