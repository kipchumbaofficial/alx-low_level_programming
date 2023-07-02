#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structur holding data about a dog
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

#include <stddef.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
