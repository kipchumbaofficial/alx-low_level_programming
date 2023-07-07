#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0
 * @index: index to change
 * @n: Number passed
 *
 * Return: 1if it worked -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int d;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	d = ~(1UL << index);
	*n &= d;
	return (1);
}
