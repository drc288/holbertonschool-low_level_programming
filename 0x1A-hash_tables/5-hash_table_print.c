#include "hash_tables.h"

/**
 * 
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	while (i < ht->size - 1)
	{
		printf("{");
		tmp = ht->array[i];
		if (tmp == NULL)
		{
			i++;
			continue;
		}
		while (tmp != NULL)
		{
			printf("\'%d\'", tmp->key);
			printf(": ");
			printf("\'%d\'", tmp->value);
			if 
		}
	}
}
