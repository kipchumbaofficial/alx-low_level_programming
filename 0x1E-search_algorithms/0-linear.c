#include <stdio.h>
/**
 * linear_search - Linear search Algorithms
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to be searched for
 *
 * Return: The index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			fprintf(stdout, "Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
