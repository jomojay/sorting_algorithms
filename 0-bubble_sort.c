#include "sort.h"

/**
 * bubble_sort - sort an int array with bubble_sort
 * @array: array of integers
 * @size: the sze of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (!(array && size))
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
