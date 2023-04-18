#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Frees dog
 * @d: Pointer to address to be freed
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
