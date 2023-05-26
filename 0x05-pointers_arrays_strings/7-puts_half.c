#include "main.h"
/**
 * str_len - Gets length of the string
 * @s: Poiter to string
 *
 * Return: Length
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * puts_half - Prints last half of a string
 * @str: Pointer to string
 */
void puts_half(char *str)
{
	int len;
	int l_half = 0;
	int i, j;

	len = str_len(str);
	if (len % 2 == 0)
	{
		l_half = len / 2;
		for (i = l_half; i <= len; i++)
		{
			if (*str != '\0')
				_putchar(str[i]);
		}
	}
	else
	{
		l_half = (len - 1) / 2;
		for (j = l_half; j <= len; j++)
		{
			if (*str != '\0')
				_putchar(str[j]);
		}
	}
	_putchar('\n');
}
