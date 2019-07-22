#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a dog woff
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_t;

	dog_t = malloc(sizeof(struct dog));
	if (dog_t == NULL)
	{
		return (NULL);
	}

	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;

	return (dog_t);
}
