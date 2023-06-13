#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
