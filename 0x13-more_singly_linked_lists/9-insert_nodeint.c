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
	listint_t *new;
	listint_t *tmp;
	unsigned int i = 0;
	int sw = 1;

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
	while (tmp)
	{
		if (i == (idx - 1))
		{
			if (tmp->next != NULL)
			{
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;
				sw = 0;
			}
		}

		tmp = tmp->next;
		i++;
	}

	if (sw == 1)
	{
		return (NULL);
	}
	else
	{
		return (tmp);
	}
}
