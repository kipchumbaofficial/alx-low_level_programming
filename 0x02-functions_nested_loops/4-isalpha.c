#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character to be checked
 *
 * Return: 1 if true and 0 otherwise
 */
int _isalpha(int c)
{
	int a, z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		if (c >= a && c <= z)
		{
			return (1);
		}
		a++;
	}

	a = 'A';
	z = 'Z';
	while (a <= z)
	{
		if (c >= a && c <= z)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		a++;
	}
	return (0);
}
