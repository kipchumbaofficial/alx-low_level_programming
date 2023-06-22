#include <stdarg.h>
/**
 * sum_them_all - Sums all arguments
 * @n: Number of arguments
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, num;
	unsigned int i;
	va_list args;

	if (n < 1)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
