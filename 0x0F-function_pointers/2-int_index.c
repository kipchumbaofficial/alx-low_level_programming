#include "function_pointers.h"
/**
 * int_index - Searches for int
 * @array: Array to be searched
 * @size: Array size
 * @cmp: Function pointer
 *
 * Return: index of number and -1 if no number matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
