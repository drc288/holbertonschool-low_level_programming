#include "lists.h"

/**
 * list_len - Count the size of the list.
 * @h: The list
 *
 * Return: Size
 */

size_t list_len(const list_t *h)
{
	int size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
