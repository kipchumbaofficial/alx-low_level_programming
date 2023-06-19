#include <unistd.h>
/**
 * _putchar - Writes Character to std output
 * @c: Character to be written
 *
 * Return: 1 on success and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
