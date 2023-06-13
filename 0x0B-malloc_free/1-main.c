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
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("Failed to allocate memory!\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
