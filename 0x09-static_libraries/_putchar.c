#include "main.h"
#include <unistd.h>
/**
 * _putchar - Princts character c to  std out
 * @c: character to  be print
 *
 * Return: 1 if successfull
 * On error return 0, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
