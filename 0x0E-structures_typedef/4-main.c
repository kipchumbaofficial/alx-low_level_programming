#include "dog.h"
#include <stdio.h>
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s and I am %.1f :) - woof!", my_dog->name, my_dog->age);
	return (0);
}
