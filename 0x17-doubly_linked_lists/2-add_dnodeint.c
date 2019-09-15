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

	if (*head == NULL)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp;
	new->prev = NULL;
	if (tmp != NULL)
	{
		tmp->prev = new;
	}
	tmp = new;
	return (new);
}
