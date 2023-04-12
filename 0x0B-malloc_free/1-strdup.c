#include "main.h"
#include "stdlib.h"
/**
 * _strdup - Returns a pointer to anewly allocated space
 * @str: String to return
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	strDup = malloc((sizeof(*str) * i) + 1);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
