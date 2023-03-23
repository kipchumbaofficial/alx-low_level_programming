#include "main.h"
/**
 * print_line - write a function that draws a line
 *
 * @n: int _
 *
 * Return: void
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
