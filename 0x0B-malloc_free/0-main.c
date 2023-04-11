#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer
 * @buffer: memory address
 * @size: size of memory to print
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
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
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("Failed to alocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
