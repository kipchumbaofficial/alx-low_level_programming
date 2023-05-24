#include "main.h"
/**
 * _puts - Prints string to std out
 * @str: string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
