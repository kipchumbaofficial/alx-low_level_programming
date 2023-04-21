#include <unistd.h>

/**
 * _putchar - Printes character to std out
 *
 * Return: 1 on success
 * On error -1 is returned , and errno set appropriately
 */
int _putchar( char *c)
{
	return (write(1, &c 1));
}
