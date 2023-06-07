#include "main.h"
/**
 * _puts_recursion - Puts with recursion
 * @s: Pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
