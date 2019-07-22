#include "dog.h"

/**
 * _strcpy - copy pointers
 * @dest: destination
 * @src: string to copy
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Count the maximum number of a array
 * @s: Input Array
 *
 * Return: counter
 */

int _strlen(char *s)
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
	char *n;
	char *o;
	int i, j;

	dog_t = malloc(sizeof(struct dog));
	if (dog_t == NULL)
	{
		return (NULL);
	}

	i = _strlen(name);
	j = _strlen(owner);

	n = malloc(i + 1);
	if (n == NULL)
	{
		free(dog_t);
		return (NULL);
	}
	o = malloc(j + 1);
	if (o == NULL)
	{
		free(dog_t);
		free(n);
		return (NULL);
	}

	n = _strcpy(n, name);
	o = _strcpy(o, owner);

	dog_t->name = n;
	dog_t->age = age;
	dog_t->owner = o;

	return (dog_t);
}
