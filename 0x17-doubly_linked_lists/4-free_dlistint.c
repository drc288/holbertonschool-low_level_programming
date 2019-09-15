#include "lists.h"

/**
 * free_dlistint - free double link list
 * @head: double link list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
