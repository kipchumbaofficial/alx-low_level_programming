#include <stdlib.h>
/**
 * strLen - Gets length of a string
 * @s: String to get length
 *
 * Return: length
 */
unsigned int strLen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strLen(s + 1));
}
/**
 * string_nconcat - Concatenates strings
 * @s1: 1st String
 * @s2: 2nd string
 * @n: Number of bytes from second string
 * Return: Address of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, size, j;
	unsigned int l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	if (n >= strLen(s2))
	{
		l = strLen(s2);
	}
	else
		l = n;
	size = strLen(s1) + l;
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	j = strLen(s1);
	for (i = 0; i < j; i++)
	{
		str[i] = s1[i];
	}
	i = 0;
	j = strLen(s1);
	while (j < size || i < size)
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
