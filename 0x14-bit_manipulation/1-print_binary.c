#include "main.h"
/**
 * print_binary - Prints binary rep of n
 * @n: Integer
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int binary;
	int num = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = (sizeof(int) * 16 - 1); i >= 0; i--)
	{
		binary = (n >> i) & 1;
		if (num || binary == 1)
		{
			_putchar('0' + binary);
			num = 1;
		}
	}
}
