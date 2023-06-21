#include <stdio.h>
#include "function_pointers.h"
/**
 * print_elem - Prints integers
 * @elem: Passed Ellement
 *
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}
/**
 * print_elem_hex - Prints elements in hexa
 * @elem: element passed
 */
void print_elem_hexa(int elem)
{
	printf("0x%x\n", elem);
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hexa);
	return (0);
}
