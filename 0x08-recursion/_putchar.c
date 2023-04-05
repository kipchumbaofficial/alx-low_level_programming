#include <unistd.h>
/**
 * _putchar - writes the character c to std out put
 * @c: The character to print
 *
 * Return: On succes 1
 * On error, -1 is returned and errno is return appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
