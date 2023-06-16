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
	int i, range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min;
	ptr = malloc(range * sizeof(int));
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
