#include "lists.h"

/**
 * get_nodeint_at_index - get the data of index and return the tmp
 * @head: The linked list
 * @index: find in head
 *
 * Return: the data of the nodo
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (i == index)
		{
			tmp = head;
		}

		head = head->next;
		i++;
	}

	return (tmp);
}
