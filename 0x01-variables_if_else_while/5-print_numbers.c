#include <stdio.h>
/**
 * main - Prints digits from zero to 9
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 9;

	while (a <= b)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
