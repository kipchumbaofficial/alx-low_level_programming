#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Gets string length
 * @str: string passed
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
 * str_concat - Concatenates strings
 * @s1: First string
 * @s2: Second string
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = (_strlen(s1)) + (_strlen(s2));
	size = len + 1;
	str = malloc(size * sizeof(char));
	i = 0;
	j = _strlen(s1);
	while (i < j)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (j < size || i < size)
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
