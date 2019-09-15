#include "lists.h"

/**
 * get_dnodeint_at_index - get the node of index
 * @head: double link list
 * @index: the index of nodo
 *
 * Return: the double link list in the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
