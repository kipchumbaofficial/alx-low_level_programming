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
		return (sqrt_aid(2, n, n));
}
/**
 * sqrt_aid - Helps check for natural numbers
 * @a: beggining
 * @z: end
 * @x: gien in
 * Return: The square roots
 */
int sqrt_aid(int x, int a, int z)
{
	long m;

	if (a >= z)
	{
		m = a + (z - a) / 2;
		if (m * m  == x)
			return (m);
		else if (m * m > x)
			return (sqrt_aid(a, m - 1, x));
		else if (m * m < x)
			return (sqrt_aid(m + 1, z, x));
	}
	return (-1);
}
