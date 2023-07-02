#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Gets Lengthof the string
 * @str: String
 *
 * Return: Length
 */
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}
/**
 * _strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: Duplicate
 */
char *_strdup(char *str)
{
	int i, len;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	newStr = malloc(sizeof(char) * len);
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0;  i < len; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = _strdup(name);
	newDog->age = age;
	newDog->owner = _strdup(owner);

	return (newDog);
}
