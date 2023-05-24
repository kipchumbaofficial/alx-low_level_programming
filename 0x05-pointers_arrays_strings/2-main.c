#include <stdio.h>
#include "main.h"
/**
 * main - Checks code
 *
 * Retur: 0
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
