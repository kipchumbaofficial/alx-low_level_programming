#include <unstd.h>
/**
 * _putchar - Writes character c in std output
 *
 * @c: Character to print
 *
 * Return: 1 on success.
 * On error, -1 is returned and errono is set apropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
