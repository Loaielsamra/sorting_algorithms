#include "sort.h"
#include <limits.h>

/**
 * selection_sort - sorst `array` using the seelction sort sorting algorithm
 * @array: array to be sorted
 * @size: isze of the array
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t	i, j, min;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
