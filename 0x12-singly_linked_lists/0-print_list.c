#include "lists.h"

/**
 * print_list - print the len and string of the list
 * @h: List
 *
 * Return: the number of elemnts.
 */

size_t print_list(const list_t *h)
{
	int size = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			size++;
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
			size++;
		}
		h = h->next;
		if (h->next == NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
				size++;
			}
			printf("[%i] %s\n", h->len, h->str);
			size++;
		}
	}
	return (size);
}
