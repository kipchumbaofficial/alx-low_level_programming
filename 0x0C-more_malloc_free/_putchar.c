#include <unistd.h>
/**
 * _putchar - prints char c to std
 * @c: character to be printed
 *
 * Return: 1 on succes and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
