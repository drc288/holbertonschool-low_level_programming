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
	unsigned int i = 1, n_nodes = 0;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	n_nodes = dlistint_len(*h);
	if (idx == n_nodes)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	tmp = *h;
	new->n = n;
	while (i != idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	tmp->next->prev = new /* Next node in position prev */
	return (new);
}
