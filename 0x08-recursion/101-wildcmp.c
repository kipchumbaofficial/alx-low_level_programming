#include "main.h"
/**
 * wildcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 != '\0' && wildcmp(s1 + 1, s2))
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}

}
