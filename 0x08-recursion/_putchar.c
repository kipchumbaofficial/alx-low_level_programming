#include <unistd.h>
/**
 * _putchar - Prints Charactrs to std out
 * @c: Character to be printed
 *
 * Return: 1 on success -1 otherwise
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
