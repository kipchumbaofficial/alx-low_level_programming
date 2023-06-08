#include "main.h"
/**
 * sqrtHelper - Gets the square root
 * @num: Number passed
 * @r: Possible sruare root initialized to zero
 *
 * Return: 1 if num has natural square root
 * -1 otherwise
 */
int sqrtHelper(int num, int r)
{
	if (num < 0 || r * r > num)
	{
		return (-1);
	}
	else if (r * r == num)
	{
		return (r);
	}
	else
	{
		return (sqrtHelper(num, r + 1));
	}
}
/**
 * _sqrt_recursion - Passes n to the helper
 * @n: Number pssed by main
 *
 * Return: 1 if n has natural square root and
 * -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (sqrtHelper(n, 0));
}
