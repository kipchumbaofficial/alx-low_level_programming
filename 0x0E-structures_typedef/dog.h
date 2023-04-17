#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Stucture tagged dog
 *
 * @name: dog's name
 * @age: Dog's Age
 * @owner: Dog's age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
