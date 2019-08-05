#include "lists.h"

/**
 * add_node_end - add new nodo in the end of the list
 * @head: header of the lit
 * @str: string
 *
 * Return: the number of elemnts.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
