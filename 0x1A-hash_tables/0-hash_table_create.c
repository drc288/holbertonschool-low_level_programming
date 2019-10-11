#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 * @size: usigned size
 * Return: a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Create variable with the type hash_table_t */
	hash_table_t *new_table = NULL;

	/* Create in memory the struct of hash_table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Set the data in the struct */
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Rteurn a new node */
	return (new_table);
}
