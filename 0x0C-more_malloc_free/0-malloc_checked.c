#include <stdlib.h>
/**
 * malloc_checked - Allocates Memory
 * @b: size of memory
 *
 * Return: Pointer to memory allocted
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
