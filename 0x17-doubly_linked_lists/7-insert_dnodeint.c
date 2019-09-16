#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node in ani position in the node
 * @h: double linked list
 * @idx: index of the linked list
 * @n: value in the new node
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *new = NULL;
	unsigned int i = 1;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if ((*h == NULL) && (idx != 0))
		return (NULL);
	else if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	tmp = *h;
	while (tmp != NULL)
	{
		if (idx == i)
		{
			new->n = n;
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			return (*h);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
