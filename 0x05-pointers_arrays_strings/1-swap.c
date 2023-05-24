#include "main.h"
/**
 * swap_int - Swaps two integer values
 * @a: first value
 * @b: Second value
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
