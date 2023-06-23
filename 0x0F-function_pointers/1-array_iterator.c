#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes passed function pointers
 * @array: Array passed
 * @size: Size of the array
 * @action: Function passed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
