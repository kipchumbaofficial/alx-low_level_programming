#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings
 * @separator: Separator
 * @n: No of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, p;
	const char *str;
	va_list args;

	if (n > 0)
	{
		if (separator == NULL)
		{
			va_start(args, n);
			for (i = 0; i < n; i++)
			{
				str = va_arg(args, const char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
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
				str = va_arg(args, const char *);
				if (str == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", str, separator);
			}
			printf("%s\n", va_arg(args, const char *));
		}
	}
}
