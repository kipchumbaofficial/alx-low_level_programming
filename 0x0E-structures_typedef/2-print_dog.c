#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print struct dog
 *
 * @d: pointer to address of any variable of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %1.f\n", d->age);
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
