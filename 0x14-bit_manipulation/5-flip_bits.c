#include "main.h"
/**
 * flip_bits - Flips bits
 * @n: First number
 * @m: second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, buf;

	buf = 0;
	for (a = 8 * sizeof(n) - 1; a >= 0; a--)
	{
		if (((n ^ m) >> a) & 1)
		{
			buf++;
		}
	}
	return (buf);
}
