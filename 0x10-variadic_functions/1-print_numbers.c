#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers
 * @n: Numer of arguments passed to function
 * @separator: String to be printed between numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(num);
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}
