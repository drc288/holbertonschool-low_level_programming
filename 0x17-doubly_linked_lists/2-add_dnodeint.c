#include "lists.h"

/**
 * add_dnodeint - Add node in the first position
 * @head: the header of de double linked list
 * @n: data of n
 *
 * Return: double linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (tmp == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		tmp->prev = new;
	}
	*head = new;
	return (new);
}
