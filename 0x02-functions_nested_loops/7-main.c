#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * main - Checks code
 *
 * Return: Always zero
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	printf("%d", INT_MIN);
	return (0);
}
