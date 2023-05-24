#include "main.h"
/**
 * _strlen - Returns length of the string
 * @s: Pointer to the string whose length is
 * to be calculated
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
