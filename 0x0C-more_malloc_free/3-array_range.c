#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Least number
 * @max: High most number
 *
 * Return: Pointer to array crated
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		*(ptr + i) = min++;
		i++;
	}
	return (ptr);
}
