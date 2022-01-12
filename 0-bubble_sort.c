#include <stdio.h>
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
	size_t f = 0;

	if (size < 2)
	{
		print_array(array, size);
		f = 1;
	}

	if (f != 1)
	{
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

}
