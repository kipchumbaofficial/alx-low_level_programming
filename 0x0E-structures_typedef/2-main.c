#include "dog.h"
#include <stdio.h>
/*
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name ="Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "BOb";
	print_dog(&my_dog);
	return (0);
}
