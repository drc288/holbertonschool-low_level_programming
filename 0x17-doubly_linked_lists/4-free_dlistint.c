#include "lists.h"

/**
 * free_dlistint - free double link list
 * @head: double link list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
