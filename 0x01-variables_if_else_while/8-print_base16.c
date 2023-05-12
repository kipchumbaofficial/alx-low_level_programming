#include <stdio.h>
/**
 * main - Prints Hexadecimals in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		putchar(a);
		a++;
	}

	a = 'a';
	b = 'f';
	while (a <= b)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
