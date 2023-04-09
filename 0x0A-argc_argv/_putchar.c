#include <unistd.h>
/**
 * _putchar - write  character c to std out
 * @c: Character to be printed
 *
 * Return : 1, On Success
 * On error return -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
