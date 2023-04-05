#include <stdio.h>
/**
 * fibonacci - works out fibanacci series of given int
 *
 * @i: given int
 *
 * Return: 1
 */
int fibonacci(int i)
{
	if (i == 0)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	return (fibonacci(i - 1) + fibonacci(i - 2));
}
/**
 * main - checks code
 *
 * Return: Always 0;
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d\t\n", fibonacci(i));
	}
	return (0);
}
