#include "sort.h"
#include <limits.h>

/**
 * selection_sort - sorst `array` using the seelction sort sorting algorithm
 * @array: array to be sorted
 * @size: isze of the array
 */

void selection_sort(int *array, size_t size)
{
	int min, temp;
	size_t	i, j;
	
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;

		print_array(array, size);
	}
}
