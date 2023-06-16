#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	char *c;

	c = string_nconcat("Best ", "School", 4);
	printf("%s\n", c);
	free(c);
	return (0);
}
