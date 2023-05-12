#include <stdio.h>
/**
 * main - Prints alphabet
 *
 * Return: 0
 */
int main(void)
{
	int a, z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
