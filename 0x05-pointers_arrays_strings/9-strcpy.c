#include "main.h"
/**
 * str_len - Gets length of a string
 * @str: Pointer to the string
 *
 * Return: Length
 */
int str_len(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * _strcpy - Copy string from src to dest
 * @src: Sources
 * @dest: destination
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = str_len(src);
	for (i = 0; i < len && *src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
