#include <stdlib.h>
/**
 * _calloc - Allocates space using malloc
 * @nmemb: elements
 * @size: bytes
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *str;
	unsigned int i, prod;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	prod = nmemb * size;
	ptr = malloc(prod);
	if (ptr == NULL)
	{
		return (NULL);
	}
	str = (char *)ptr;
	for (i = 0; i < prod; i++)
	{
		str[i] = 0;
	}
	return (ptr);
}
