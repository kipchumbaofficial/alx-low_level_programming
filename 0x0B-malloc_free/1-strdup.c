#include <stdlib.h>
/**
 * _strlen - Gets string length
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
 * _strdup - Duplicates string
 * @str: String to be duplicated
 *
 * Return: String duplicated
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
