#include "main.h"
/**
 * _puts - Prints string to std out
 * @s: String to be printed
 */
void _puts(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts(s + 1);
}
