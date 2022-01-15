#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sort array values in ascending order
 *
 * @array: array to be sorted
 * @size: szie of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min;

	if (array == NULL || size == 0)
		exit(0);

	for (i = 0; i < (size - 1); i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			min = j;
		}

		if (i != j)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
