#include <stdio.h>
/**
 * factorial - prints out factorial solution of a number
 *
 * @n: The int
 *
 * Return: factorial
 */
int factorial(int n)
{
	int res;
	int i;

	res = 1;
	i = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}
/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	int f;

	f = factorial(6);
	printf("6! = %d\n", f);
	return (0);
}
