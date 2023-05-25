#include "main.h"
/**
 * str_len - Gets length of the string
 * @str: Pointer to string
 *
 * Return: Length of the string
 */
int str_len(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len - 1);
}
/**
 * print_rev - Prints string in reverse
 * @s: String to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = str_len(s);
	for (i = len; i >= 0; i--)
	{
		if (*s != '\0')
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
