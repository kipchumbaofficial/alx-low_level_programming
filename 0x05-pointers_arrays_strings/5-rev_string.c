#include "main.h"
/**
 * str_len - Gets length of the string
 * @str: Pointer to string
 *
 * Return: Length
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
 * rev_string - Reverses string
 * @s: Pointer to string
 *
 */
void rev_string(char *s)
{
	int len;
	int a, z;
	char temp;

	len = str_len(s);
	a = 0;
	z = len;
	while (a < z)
	{
		temp = s[a];
		s[a] = s[z];
		s[z] = temp;
		a++;
		z--;
	}
}
