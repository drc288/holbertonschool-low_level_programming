#include "lists.h"

/**
 * print_dlistint - return the numbers of the nodes in a double linked list
 * @h: The double linked list
 *
 * Return the number of the nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	int count = 0;

	if (h == NULL)
		return (0);
	
	tmp = h;
	while (tmp != NULL)
	{
		count += 1;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (count);
}
