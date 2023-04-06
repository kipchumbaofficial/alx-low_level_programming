#include "main.h"
/**
 * is_prime_number - checks whether a inpute is prime
 * @n: input integer
 *
 * Return: 1 if prime zero if not
 */
int is_prime_number(int n)
{
	int m;

	if (n <= 1)
		return (0);
	for (m = 2; m * m <= n; m++)
	{
		if (n % m == 0)
			return (0);
	}
	return (1);
}
