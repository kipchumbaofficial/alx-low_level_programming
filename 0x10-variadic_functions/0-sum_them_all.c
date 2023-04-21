#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sums all arguments passed to function
 *
 * @n: integer
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
