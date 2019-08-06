#include "lists.h"

/**
 * free_listint2 - free the memori and set null in the last
 * @head: the simple list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	tmp = NULL;
}

