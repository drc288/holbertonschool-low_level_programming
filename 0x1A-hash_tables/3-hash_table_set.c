#include "hash_tables.h"

/**
 * 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Create index for array and encryot the key */
	unsigned long int index = 0, i;
	unsigned long int array_index = 0;
	char *dup_key;
	char *dup_value;
	hash_node_t *tmp;

	/* Verify if key and value and ht is null */
	if (key == NULL && value == NULL && ht == NULL)
		return (0);
	/* set index and key_seze */
	index = ht->size;
	/* duplicate the key and the value */
	dup_key = strdup(key);
	dup_value = strdup(value);
	/* Create the key */
	hash_djb2(key);
	array_index = key_index(key, index);
	if (array_index > index)
		return (0);

	tmp = ht->array[array_index];
	if (tmp && strcmp(tmp->key, dup_key) == 0)
	{
		tmp->value = dup_value;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp->key = dup_key;
	tmp->value = dup_value;
	tmp->next = tmp;
	ht->array[array_index] = tmp;
	return (1);
}
