#include "lists.h"

/**
 * sum_listint - sum the n value in the simple link list
 * @head: The simple link list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
