#include "lists.h"

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
	listint_t *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
	}

	while (i != idx - 1)
	{
		if (tmp->next != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}

	new->next = tmp->next;
	tmp->next = new;
	return (tmp);
}
