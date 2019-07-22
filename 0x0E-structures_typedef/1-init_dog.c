#include "dog.h"

/**
 * init_dog - Init the structure of Django
 * @d: Pointer with address of dog
 * @name: Name of Django
 * @age: age of Djando
 * @owner: Owner of Djando
 *
 * Return: Pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**
	 *d = malloc(sizeof(struct dog));
	 *if (d == NULL)
	 *{
	 *	return (NULL);
	 *}
	 */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
