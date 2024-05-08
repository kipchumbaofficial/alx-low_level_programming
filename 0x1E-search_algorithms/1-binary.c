#include <stdio.h>
/**
 * binary_search - Binary Search Algorithm
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to be searched for
 *
 * Return: Index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid, i;

	if (array != NULL)
	{
		while (low  <= high)
		{
			mid = low + (high - low) / 2;
			fprintf(stdout, "Searching in array: ");
			for (i = low; i <= high; i++)
			{
				if (i < high)
					fprintf(stdout, "%d, ", array[i]);
			}
			fprintf(stdout, "%d\n", array[high]);
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (-1);
}
