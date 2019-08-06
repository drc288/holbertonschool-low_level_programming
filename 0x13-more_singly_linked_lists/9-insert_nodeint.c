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
	listint_t *new, *tmp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (tmp)
	{
		if (i == (idx - 1))
		{
			if (tmp->next == NULL)
			{
				new->n = n;
				new->next = NULL;
				tmp->next = new;
				return (tmp);
			}
			else
			{
				return (NULL);
			}
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
		}
		tmp = tmp->next;
		i++;
	}
	free(new);
	return (tmp);
}
