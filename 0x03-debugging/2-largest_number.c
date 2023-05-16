#include "main.h"
/**
 * largest_number - returns the largest number of 3 integers
 * @a: first integer
 * @b: second int
 * @c: third int
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a &&  b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if (a == b && b == c)
	{
		largest = a;
	}
	else if (a == b || a == c)
	{
		largest = a;
	}
	else if (b == c)
	{
		largest = b;
	}

	return (largest);
}
