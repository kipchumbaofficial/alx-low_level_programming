#include <unistd.h>
/**
 * _putchar - Prints char to std out
 * @c: Character to print
 *
 * Return: 1 if succesfull
 * On error return -1 and errno set appropriately
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
