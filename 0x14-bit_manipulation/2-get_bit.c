#include "main.h"
/**
 * _strlen - Gets length of a string
 * @str: String passed
 *
 * Return: 0
 */
unsigned int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}
/**
 * binCon - Converts number to binary
 * @n: Number passed
 *
 * Return: Address of the binary number
 */
char *binCon(unsigned long int n)
{
	int i, j, temp = 0;
	char *ptr;

	ptr = malloc(sizeof(char) * 64 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 63; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
			*(ptr + temp) = '1';
		else
			*(ptr + temp) = '0';
		temp++;
	}
	*(ptr + temp) = '\0';
	return (ptr);
}
/**
 * get_bit - Gets bit value at given index
 * @n: Number passed
 * @index: index of bit
 *
 * Return: Value at give bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num, i;
	unsigned int len, idx = 0;
	char *binary = binCon(n);

	if (binary != NULL)
	{
		len = _strlen(binary);
		i = len - 1;

		while (i >= 0)
		{
			if (idx == index)
			{
				num = binary[i] - '0';
				return (num);
			}
			idx++;
			i--;
		}
	}
	return (-1);
}
