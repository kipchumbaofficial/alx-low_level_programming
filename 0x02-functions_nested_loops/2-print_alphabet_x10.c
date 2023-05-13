#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i, a, z;

	i = 0;
	while (i <= 9)
	{
		a = 'a';
		z = 'z';
		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
