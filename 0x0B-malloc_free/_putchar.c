#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints char c to std out
 * @c: Character to print
 *
 * Return: 1 on success
 * On error returns -1, errno is  set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
