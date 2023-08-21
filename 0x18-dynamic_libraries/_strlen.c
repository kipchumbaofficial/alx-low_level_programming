#include <stdio.h>
/**
 * _strlen - Gets length of the string
 * @s: String
 *
 * Return: length
 */
int _strlen(char *s)
{
	if(*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s - 1));
}
