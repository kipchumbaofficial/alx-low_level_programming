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
	int i, len;

	if (size == 0)
	{
		return (NULL);
	}
	len = size + 1;
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
