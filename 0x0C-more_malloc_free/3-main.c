#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * simple_print_buffer - Prints buffer in Hexa
 * @buffer: Memory address
 * @size: Size of the address
 *
 * Return: Nothing
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	int *a;

	a = array_range(-2024, -1024);
	simple_print_buffer(a, 1000);
	free(a);
	return (0);
}
