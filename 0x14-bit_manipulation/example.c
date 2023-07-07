#include "main.h"
/**
 * _strLen - Gets length
 * @str: String passed
 *
 * Return: Length
 */
unsigned int _strLen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strLen(str + 1));
}
/**
 * binCon - Convert to binary
 * @n: Address of the number
 *
 * Return: binary
 */
char *binCon(unsigned long int *n)
{
	int i, j, temp = 0;
	unsigned long int num = *n;
	char *ptr;

	ptr = malloc(sizeof(char) * 64 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 63; i >= 0; i--)
	{
		j = num >> i;
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
 * powerTwo - Gets 2 raised to index
 * @i: index
 *
 * Return: Power of 2
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
 * deciCon - Convert to decimal
 * @b: string
 */
void deciCon(char *b)
{
	unsigned int len, num;
	int i, index = 0;

	num = 0;
	if (b != NULL)
	{
		len = _strLen(b);
		for (i = (len - 1); i >= 0; i--)
		{
			if (b[i] == '0')
			{
				num += 0;
			}
			else
			{
				num += powerTwo(index);
			}
			index++;
		}
	}
}
/**
 * set_bit - Sets value of given bit to 1
 * @n: Address of the number
 * @index: Index to change
 *
 * Return: 1 if worked and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;
	unsigned int len, idx = 0;
	char *binary;

	if (n != NULL)
	{
		binary = binCon(n);
		if (binary != NULL)
		{
			len = _strLen(binary);
			i = len - 1;
			while (i >= 0)
			{
				if (idx == index)
				{
					binary[i] = '1';
					deciCon(binary);
					printf("%lu\n", deciCon(binary));
					return (1);
				}
				idx++;
				i--;
			}
		}
	}
	return (-1);
}
