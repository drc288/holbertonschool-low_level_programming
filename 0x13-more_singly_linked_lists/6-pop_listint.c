#include "lists.h"

/**
 * pop_listint - remove the firstnodo
 * @head: The simple list
 *
 * Return: the value n in the linked list
 */

int pop_listint(listint_t **head)
{
	int size;
	listint_t *remove;


	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		remove = *head;
		size = (*head)->n;
		*head = (*head)->next;
		free(remove);
	}

	return (size);
}
