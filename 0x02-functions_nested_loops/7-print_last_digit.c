#include "main.h"
/**
 * print_last_digit - Prints last digit of a given integer
 * @num: Given integer
 *
 * Return: Last digit of the given integer
 */
int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
	{
		num = -num;
	}
	lastDigit = num % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
