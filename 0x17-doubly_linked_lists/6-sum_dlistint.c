#include "lists.h"

/**
 * sum_dlistint - Add all values of n
 * @head: double linked list
 *
 * Return: value
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	int count = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
