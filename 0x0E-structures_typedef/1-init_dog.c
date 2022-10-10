#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
