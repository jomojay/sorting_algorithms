#include "sort.h"
/**
 * knuth_gap - gets the gap of an array of size(size)
 * @size: size of array
 *
 * Return: the gap
 */
size_t knuth_gap(size_t size)
{
	size_t gap = 1;

	while (gap < size)
		gap = gap * 3 + 1;
	return ((gap - 1) / 3);
}
/**
 * shell_sort - sort an int array via shell sort
 * @array: the array
 * @size: the size of the array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	if (!(array && size))
		return;
	gap = knuth_gap(size);

	while (gap)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap = gap / 3;
	}
}
