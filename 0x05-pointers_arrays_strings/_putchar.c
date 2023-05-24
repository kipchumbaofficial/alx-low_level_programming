#include <unistd.h>
/**
 * _putchar - Writes character c to std output
 * @c: The character to be printed
 *
 * Return: 1 on success
 * on error returns -1 and errno set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
