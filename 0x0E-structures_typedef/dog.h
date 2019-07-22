#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - struct a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;

/* Prototype */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
