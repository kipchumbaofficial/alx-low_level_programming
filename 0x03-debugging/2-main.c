#include <stdio.h>
#include "main.h"

/**
 * main - prints the lagest number of 3 integers
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 98;
	b = 0;
	c = 98;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}