#include "hash_tables.h"

/**
 * key_index - asd
 * @key: asd
 * @size: asd
 * Return: asd
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0, _key = 0;

	_key = hash_djb2(key);
	idx = _key % size;
	return (idx);
}
