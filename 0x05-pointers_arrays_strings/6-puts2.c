#include "main.h"
/**
 * puts2 - Prints string incremented by 2
 * @str: Pointer to string to be printed
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
