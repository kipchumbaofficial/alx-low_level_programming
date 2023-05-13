#include "main.h"
/**
 * print_sign - Print sign of a number
 *
 * @n: number to be checked
 *
 * Return: 0 if number is zero 1 if number is greater than 0 and -1 otherwise
 */
int print_sign(int n)
{
	int plus, minus, zero;

	plus = '+';
	minus = '-';
	zero = '0';
	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(zero);
		return (0);
	}
	else
	{
		_putchar(minus);
		return (-1);
	}
	return (0);
}
