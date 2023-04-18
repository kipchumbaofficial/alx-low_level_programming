#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog
 * @name: Dogs Name
 * @owner: Dogs owner
 * @age: dogs age
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int jina, mwenyewe, i;
	dog_t *ptr;

	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	jina = mwenyewe = 0;
	while (name[jina++])
		;
	while (owner[mwenyewe++])
		;
	ptr->name = malloc(jina * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= jina; i++)
		ptr->name[i] = name[i];
	ptr->age = age;
	ptr->owner = malloc(mwenyewe * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= mwenyewe; i++)
		ptr->owner[i] = owner[i];
	return (ptr);
}
