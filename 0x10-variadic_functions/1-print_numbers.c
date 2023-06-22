#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - Prints numbers with separator
 * @separator: Separates numbers
 * @n: Number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i, p;
	va_list args;

	if (n > 0)
	{
		if (separator == NULL)
		{
			va_start(args, n);
			for (i = 0; i < n; i++)
			{
				num = va_arg(args, int);
				printf("%d", num);
			}
			va_end(args);
			printf("\n");
		}
		else
		{
			p = n - 1;
			va_start(args, n);
			for (i = 0; i < p; i++)
			{
				num = va_arg(args, int);
				printf("%d%s", num, separator);
			}
			printf("%d\n", va_arg(args, int));
			va_end(args);
		}
	}
}
