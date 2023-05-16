#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers to 98
 * @n: Int given
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", 98);
	}
	else
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
}
