#include "main.h"
/**
 * set_bit - Sets Value at a bit to 1
 * @n: Address of the number
 * @index: Index at bit
 *
 * Return: 1 if worked or -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cover;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	cover = 1UL << index;
	*n |= cover;
	return (1);
}
