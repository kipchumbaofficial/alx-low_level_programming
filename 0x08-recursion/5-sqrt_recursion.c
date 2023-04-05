#include "main.h"
/**
 * _sqrt_recursion - finds sqrt
 * @n: number given
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_aid(n, 1, n));
}
/**
 * sqrt_aid - Helps check for natural numbers
 * @a: beggining
 * @z: end
 * @n: gien in
 * Return: The square roots
 */
int sqrt_aid(int n, int a, int z)
{
	int m;
	int s;

	if (a > z)
	{
		return (-1);
	}
	m = (a + z) / 2;
	s = m * m;

	if (s == n)
		return (m);
	else if (s < n)
		return (sqrt_aid(n, m + 1, z));
	else
		return (sqrt_aid(n, a, m - 1));
}
