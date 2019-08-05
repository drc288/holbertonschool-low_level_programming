#include "lists.h"

/**
 * add_nodeint - add new nodo in linked list
 * @head: the head of linked list
 * @n: integer
 *
 * Return: the new nodo
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
