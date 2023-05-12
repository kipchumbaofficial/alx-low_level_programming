#include <stdio.h>
/**
 * main - Prints decimals separated by a comma and space
 *
 * Return: 0;
 */
int main(void)
{
	int a, b, c, d;

	a = '0';
	b = '9';
	c = ',';
	d = ' ';

	while (a <= b)
	{
		putchar(a);
		putchar(c);
		putchar(d);
		a++;
	}
	putchar('\n');
	return (0);
}
