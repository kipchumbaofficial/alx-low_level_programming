#include "main.h"
/**
 * print_last_digit - Prints last digit of a given integer
 * @num: Given integer
 *
 * Return: Last digit of the given integer
 */
int print_last_digit(int num)
{
	int i, lastDigit;

	i = -1;
	if (num >= 0)
	{
		lastDigit = num % 10;
		_putchar(lastDigit + '0');
	}
	else
	{
		lastDigit = (num * i) % 10;
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
