#include "hash_tables.h"

/**
 * key_index - Create a key index if the string
 * @key: String key
 * @size: the size of **array
 * Return: the inedex
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
