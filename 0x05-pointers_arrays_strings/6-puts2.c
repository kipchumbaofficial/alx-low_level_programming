#include "main.h"
/**
 * str_len - Gets length of the given string
 * @str: pointer to string
 *
 * Return: length
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
	return (len);
}
/**
 * puts2 - Prints string incremented by 2
 * @str: Pointer to string to be printed
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;
	int len;

	len = str_len(str);
	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
