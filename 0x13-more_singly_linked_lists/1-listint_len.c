#include "lists.h"

/**
 * listint_len - Len of the linked list
 * @h: linked list
 *
 * Return: size of linked list
 */

size_t listint_len(const listint_t *h)
{
	int size;

	size = 0;
	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
