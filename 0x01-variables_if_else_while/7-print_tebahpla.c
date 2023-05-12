#include <stdio.h>
/**
 * main - Prints alphabet in reverse
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
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
