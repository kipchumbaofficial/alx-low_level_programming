#include <stdio.h>
#include "dog.h"
/**
 * print_day - Prints a struct dog
 * @d: Pointer to structure to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		if (d->age != 0)
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
		else
		{
			printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, "(nil)", d->owner);
		}
	}
}
