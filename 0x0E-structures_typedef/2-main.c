#include "dog.h"
#include <stdio.h>
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = NULL;
	my_dog.age = 0;
	my_dog.owner = NULL;
	print_dog(&my_dog);
	return (0);
}
