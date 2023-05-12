#include <stdio.h>
/**
 * main - Print alphabet except q and e
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
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
