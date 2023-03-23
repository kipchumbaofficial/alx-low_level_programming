#include "main.h"
/**
 * _isupper - Check whether the Alphabet is uppercase
 * @c: Variable text
 * Return: 0
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
