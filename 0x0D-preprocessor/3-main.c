#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
#include <stdio.h>
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = (-98) * 10;
	j = 98 * 10;
	printf("%d, %d\n", i, j);
	printf("%d\n", ABS(1024));
	printf("%d\n", ABS(-1024));
	printf("%f\n", ABS(1024.827634));
	printf("%f\n", ABS(-1024.827634));
	printf("%ld\n", ABS(1022344827634));
	printf("%ld\n", ABS(-1022344827634));
	printf("%d\n", ABS(0));
	printf("%d\n", ABS(1024 - 2048));
	return (0);
}
