#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: Always Success
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		exit(0);

	for (i = 0; i < (size - 1); i++)
	{
		size_t flag = 0;

		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag != 1)
			break;
	}
}
