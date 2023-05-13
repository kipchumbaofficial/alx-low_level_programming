#include "main.h"
/**
 * _islower - Checks for lower case characters
 * @c: Character to be checked
 *
 * Return: 1 if Is lower and 0 otherwise
 */
int _islower(int c)
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
		else
		{
			return (0);
		}
		a++;
	}
	return (0);
}
