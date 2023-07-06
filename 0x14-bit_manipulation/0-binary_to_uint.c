#include "main.h"
/**
 * _strlen - Gets length of the string
 * @str: String
 *
 * Return: 0
 */
unsigned int _strlen(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}
/**
 * powerTwo - Gets power of two
 * @i: index
 *
 * Return: The power of two
 */
unsigned int powerTwo(int i)
{
	unsigned int res = 1;

	while (i > 0)
	{
		res *= 2;
		i--;
	}
	return (res);
}
/**
 * binary_to_uint - Convert number to binary
 * @b: String
 *
 * Return: Cnverted string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num;
	int i, index = 0;

	num = 0;
	if (b != NULL)
	{
		len = _strlen(b);
		for (i = (len - 1); i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			else
			{
				if (b[i] == '0')
				{
					num += 0;
				}
				else
				{
					num += powerTwo(index);
				}
			}
			index++;
		}
	}
	return (num);
}
