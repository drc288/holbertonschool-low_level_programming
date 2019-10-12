#include "hash_tables.h"

/**
 * hash_table_print - print the all list of array.
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, fl = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		if (tmp == NULL)
		{
			i++;
			continue;
		}
		while (tmp != NULL)
		{
			if (fl != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			fl++;
		}
		i++;
	}
	printf("}\n");
}
