#include <stdio.h>
#include "main.h"
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	return (0);
}
