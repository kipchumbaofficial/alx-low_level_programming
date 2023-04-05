#include <stdio.h>
/**
 * factorial - prints factorial of a number give
 * @n: int
 *
 * Return: Factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
