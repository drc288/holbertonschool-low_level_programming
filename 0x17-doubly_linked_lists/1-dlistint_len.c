#include "lists.h"

/**
 * dlistint_len - list the nodes of double linked list
 * @h: the double linked list
 *
 * Return: the number of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	int count = 0;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}
