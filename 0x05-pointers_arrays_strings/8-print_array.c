#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an Array
 * @a: pointer to integer
 * @n: Number of elments
 *
 */
void print_array(int *a, int n)
{
	int i, x;

	if (n > 0)
	{
		x = n - 1;
		for (i = 0; i < x; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[x]);
	}
	else
	{
		fprintf(stderr, "length can be less than 0\n");
	}
}
