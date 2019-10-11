#include "hash_tables.h"

/**
 * hash_table_set - set nodo in the table
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: 0 to fail 1 to secccuss
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Create index for array and encryot the key */
	unsigned long int array_index = 0;
	char *dup_key;
	char *dup_value;
	hash_node_t *tmp;

	/* Verify if key and value and ht is null */
	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	/* dup values */
	dup_key = strdup(key);
	dup_value = strdup(value);
	/* set index and key_seze */
	array_index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[array_index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, dup_key) == 0)
		{
			tmp->value = dup_value;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp->key = dup_key;
	tmp->value = dup_value;
	tmp->next = ht->array[array_index];
	ht->array[array_index] = tmp;
	return (1);
}
