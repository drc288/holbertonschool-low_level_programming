#include "dog.h"

/**
 * free_dog - free the dog
 * @d: the dog
 *
 * Return: counter
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
}
