#include "lists.h"

/**
 * _strlen - Count the maximum number of a array
 * @s: Input Array
 *
 * Return: counter
 */

int _strlen(const char *s)
{
	int cont;

	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	return (cont);
}

/**
 * add_node_end - add new nodo in the end of the list
 * @head: header of the lit
 * @str: string
 *
 * Return: the number of elemnts.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode;
	list_t *tmp;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}

	endNode = malloc(sizeof(list_t));
	if (endNode == NULL)
	{
		return (NULL);
	}
	endNode->str = strdup(str);
	endNode->len = _strlen(str);
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = endNode;
	return (endNode);
}
