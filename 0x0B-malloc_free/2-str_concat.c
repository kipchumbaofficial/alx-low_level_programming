#include <stdlib.h>
#include <stdio.h>
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
 * strCheck - Checks if string is NULL
 * @s1: First string
 * @s2: second string
 *
 * Return: size
 */
int strCheck(char *s1, char *s2)
{
	int len;

	if (s1 == NULL)
	{
		len = _strlen(s2);
	}
	else if (s2 == NULL)
	{
		len = _strlen(s1);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		len = 1;
	}
	return (len);
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

	if (s1 == NULL || s2 == NULL || (s1 == NULL && s2 == NULL))
	{
		len = strCheck(s1, s2);
	}
	else
		len = (_strlen(s1)) + (_strlen(s2));
	size = len + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		str = s2;
	}
	else if (s2 == NULL)
		str = s1;
	else if (s1 == NULL && s2 == NULL)
		str = "";
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
