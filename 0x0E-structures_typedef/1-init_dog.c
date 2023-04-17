#include <stdio.h>
#include "dog.h"
/**
 * init_dog - description
 * @d: pointer
 * @name: Dog's Name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
