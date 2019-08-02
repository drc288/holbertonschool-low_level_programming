#include "lists.h"

/**
 * free_list - free the list
 * @head: header file
 *
 * Return: Size
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

	free(head);
}
