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

/**
 * insert_nodeint_at_index - Insert nodo in idx position
 * @head: Simple list
 * @idx: index
 * @n: value n for new node
 *
 * Return: the new nodo
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i = 0;
	size_t total;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	tmp = *head;
	total = listint_len(tmp);

	if (idx >= total)
	{
		return (NULL);
	}

	while (tmp)
	{
		if (i == (idx - 1))
		{
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
		}

		tmp = tmp->next;
		i++;
	}


	return (tmp);
}
