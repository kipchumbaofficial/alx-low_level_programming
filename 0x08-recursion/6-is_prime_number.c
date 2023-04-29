#include "main.h"
/**
 * is_prime_number - checks whether a inpute is prime
 * @n: input integer
 *
 * Return: 1 if prime zero if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_no(n, 2));
}
/**
 * is_prime_no - aids the _is_prime_number
 * @n: int given
 * @m: divisor
 *
 * Return: prime number
 */
int is_prime_no(int n, int m)
{
	if (m * m > n)
		return (1);
	if (n % m == 0)
		return (0);
	return (is_prime_no(n, m + 1));
}
