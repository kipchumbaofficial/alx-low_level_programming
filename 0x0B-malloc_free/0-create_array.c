#include <stdlib.h>
/**
 * create_array - Creates an array
 * @c: Character to create array with
 * @size: Size of Array
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
