#include <stdio.h>
/**
 * main - Print digits from 0 to 9 using putchar
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
	putchar('\n');
	return (0);
}
