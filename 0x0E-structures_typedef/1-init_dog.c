#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initiliazes a dog
 * @d: dog to be initialized
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
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
