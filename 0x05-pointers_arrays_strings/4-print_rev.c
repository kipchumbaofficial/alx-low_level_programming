#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: String to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
