#include <unistd.h>
/**
 * _putchar - Writes Characters to std out
 *
 * @c: Character to be printed
 *
 * Return: 1 on success and -1 otherwise
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
