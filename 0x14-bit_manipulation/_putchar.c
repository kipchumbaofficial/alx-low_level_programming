#include <unistd.h>
/**
 * _putchar - Writes character to stdout
 * @c: Character to print
 *
 * Return: 1 or -1 otherwise
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
